#ifndef PID_h
#define PID_h
#define LIBRARY_VERSION	1.1.2

class PID {
	private:
		void Initialize();
		
	 	// we'll hold on to the tuning parameters in user-entered 
		double dispKp;

		// format for display purposes
		double dispKi;	
		double dispKd;

		// (P)roportional Tuning Parameter
		double kp;
		// (I)ntegral Tuning Parameter
	    double ki;
	    // (D)erivative Tuning Parameter
	    double kd;

		int controllerDirection;

		/* 
		Pointers to the Input, Output, and Setpoint variables.
		This creates a hard link between the variables and 
		the PID, freeing the user from having o constantly 
		tell us what there values are. With the pointers 
		we'll just know.
		*/
	    double *myInput;              
	    double *myOutput;            
	    double *mySetpoint;           
				  
		unsigned long lastTime;
		double ITerm, lastInput;

		unsigned long SampleTime;
		double outMin, outMax;
		bool inAuto;

	public:
		// Constants used in some of the functions below
		#define AUTOMATIC 1
		#define MANUAL 0
		#define DIRECT 0
		#define REVERSE 1

		// Commonly used functions

		/*
		Constructor  links the PID to the Input, Output and Setpoint. Additional, the initial tuning parameters are set here. 
		*/
		PID(double*, double*, double*,        
		    double, double, double, int);

		// Sets the PID to either Manual (0) or Auto (non-0)
		void SetMode(int Mode);               

		/* 
		Performs the PID calculation. It should be called every time loop() cycles. ON/OFF and calculation frequency can be set using SetMode and SetSampleTime respectively. 
		*/
		bool Compute();

		/* 
		Clamps the output to a specific range, generally 0-255 by default, but it's likely the user will want to change this depending on the application 
		*/
											  
		void SetOutputLimits(double, double); 

		// Not commonly functions 

		/* 
		While most users will set the tunings once in the constructor, this function gives the user the option of changing tunings during runtime for Adaptive control 
		*/
		void SetTunings(double, double, double);

		/* 
		Sets the Direction, or "Action" of the controller. 
		DIRECT means the output will increase when error is positive. REVERSE means the opposite. It's very unlikely that this will be needed once it is set in the constructor. */
		void SetControllerDirection(int);	

		/* 
		Sets the sample time (in ms) with wich the PID calculation is performed. The default value for this is 100 ms 
		*/
		void SetSampleTime(int);             
											  
											  
											  
		//Display functions

		/* 
		These functions query the pid for interal values. They were created mainly for the pid front-end, where it's important to know what is actually inside the PID.
		*/
		double GetKp();
		double GetKi();
		double GetKd();
		int GetMode();
		int GetDirection();
};
#endif


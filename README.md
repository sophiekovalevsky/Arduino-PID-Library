Arduino PID Library - Version 1.1.2
=================
This is a fork of Brett's awesome library to work with PID controllers in Arduino Platform.

## Author
This library was created by Brett Beauregard.

## Useful information and resources

<table>
	<tr>
		<th>Methods</th>
		<th>What it does?</th>
	</tr>
	<tr>
		<td><code>SetMode(int Mode)</code></td>
		<td>Allow the controller set to MANUAL or AUTOMATIC.</td>
	</tr>
	<tr>
		<td><code>Compute()</code></td>
		<td>Performs the PID calculation.</td>
	</tr>
	<tr>
		<td><code>SetOutputLimits(double Min, double Max)</code></td>
		<td>Limit the output range of the PID.</td>
	</tr>
	<tr>
		<td><code>SetTunings(double Kp,double Ki,double Kd)</code></td>
		<td>Assign values to Kp, Ki and Kd parameters during normal operation.</td>
	</tr>
	<tr>
		<td><code>SetControllerDirection(int Direction)</code></td>
		<td>Connect the PID into a DIRECT or REVERSE process.</td>
	</tr>
	<tr>
		<td><code>SetSampleTime(int NewSampleTime)</code></td>
		<td>Assign the sample time in ms at which the calculation is performed.</td>
	</tr>
	<tr>
		<td><code>GetKp(), GetKi(), GetKd(), GetMode(), GetDirection()</code></td>
		<td>Display the Kp, Ki and Kd parameters respectively. Query mode and direction of PID controller.</td>
	</tr>
</table>

For those who are interested about details of this library, take at look at:
[Improving the beginners pid introduction](http://brettbeauregard.com/blog/2011/04/improving-the-beginners-pid-introduction/)

## License
Arduino PID Library is licensed under [GPLv3](LICENSE)

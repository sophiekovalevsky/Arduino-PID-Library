Arduino PID Library - Version 1.1.2
=================
This is a fork of Brett's awesome library to work with PID controllers in Arduino Platform.

## Author
This library was created by Brett Beauregard.

<table>
	<tr>
		<th>Methods</th>
		<th>What it does?</th>
	</tr>
	<tr>
		<td><code>PID()</code></td>
		<td></td>
	</tr>
	<tr>
		<td><code>SetMode()</code></td>
		<td>Allos the controller set to manual or automatic.</td>
	</tr>
	<tr>
		<td><code>Compute()</code></td>
		<td></td>
	</tr>
	<tr>
		<td><code>SetOutputLimits()</code></td>
		<td>Limit the output range of the PID.</td>
	</tr>
	<tr>
		<td><code>SetTunings()</code></td>
		<td>Assign values to Kp, Ki and Kd parameters during normal operation.</td>
	</tr>
	<tr>
		<td><code>SetControllerDirection()</code></td>
		<td>Connect the PID into a DIRECT or REVERSE process.</td>
	</tr>
	<tr>
		<td><code>SetSampleTime()</code></td>
		<td>Assign the sample time in ms at which the calculation is performed.</td>
	</tr>
	<tr>
		<td><code>GetKp(), GetKi(), GetKd()</code></td>
		<td>Display the Kp, Ki and Kd parameters.</td>
	</tr>
	<tr>
		<td><code>GetMode()</code></td>
		<td>Returns the PID's mode.</td>
	</tr>
	<tr>
		<td><code>GetDirection()</code></td>
		<td>Returns the PID's direction.</td>
	</tr>
</table>


## Useful resources
For those who are interested about details of this library, take at look at:
[Improving the beginners pid introduction](http://brettbeauregard.com/blog/2011/04/improving-the-beginners-pid-introduction/)

## License
Arduino PID Library is licensed under [GPLv3](LICENSE)

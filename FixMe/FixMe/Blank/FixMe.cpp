/*
 * CPPFile1.cpp
 *
 * Created: 12.9.2016 13:06:07
 *  Author: 
 */ 


 // func blinks if prime number, not working?
 void BlinkIfPrime(int number) {
 
	for (int i = 2; i <= (number/2); ++i) {
		if (number % i == 0) {			
			digitalWrite(13, HIGH);
			delay(1500);
			digitalWrite(13, LOW);
			delay(500);
}
}

/*
 * CPPFile1.cpp
 *
 * Created: 12.9.2016 13:06:07
 *  Author: 
 */ 
// Review: Luca and Mikko
// func blinks if prime number, not working?
// fixed


 
 #include <Arduino.h>

int flag =0; 


void BlinkIfPrime(int NEXTNumber)   //fixed the function 
{
for(int i=2; i<(NEXTNumber/2); ++i)
{
if(NEXTNumber%i==0)
{
	flag=1;

}
}
if(flag==0)
{
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000); 
}
flag=0; 
}

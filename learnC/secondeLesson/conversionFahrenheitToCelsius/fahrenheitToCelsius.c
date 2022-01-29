#include <stdio.h>  // uses to work with input/output.
//Symbolic constant representation area.
#define LOWER 0 /* lower limit of table*/  
#define UPPER 300 /* upper limit*/  
#define STEP 20
 /* print Fahrenheit-Celsius table  for Fahrenheit = 0, 20, ... , 300 */
 main()  
 {  
     int Fahrenheit;  
     //Convert each value of Fahrenheit to Celsius.
     for (Fahrenheit = LOWER; Fahrenheit <= UPPER; Fahrenheit = Fahrenheit + STEP)
     {
        printf("%3d %6.1f\n", Fahrenheit, (5.0/9.0)*(Fahrenheit-32)); 
     } 
 }
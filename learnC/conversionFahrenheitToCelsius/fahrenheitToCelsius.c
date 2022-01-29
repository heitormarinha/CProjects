#include <stdio.h>
 //Symbolic constant representation area.
 #define LOWER 0 /* lower limit of table*/  
 #define UPPER 300 /* upper limit*/  
 #define STEP 20 /* step size*/  
 /* p:i:int Fahrenheit-Celsius table*/  
 main()  
{  
    int fahrenheit;  
    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
    {
        printf("%3d %6.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit-32));  
    }
}
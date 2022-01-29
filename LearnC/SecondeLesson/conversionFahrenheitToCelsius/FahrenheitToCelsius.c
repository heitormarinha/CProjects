#include <stdio.h>  // uses to work with input/output
 /* print Fahrenheit-Celsius table  for fahr = 0, 20, ... , 300 */  
 main()  
{  
    int fahr, celsius; 
    int lower, upper, step;  
    lower= 0;  upper= 300;  
    step= 20;  fahr = lower;  
    /* lower limit of temperature table*/ 
    /* upper limit*/  /* step size*/  
    while (fahr <= upper) 
    {  
        celsius = 5 * (fahr-32) / 9;  
        printf("%d\t%d\n", fahr, celsius);  
        fahr = fahr + step;  
    }
}
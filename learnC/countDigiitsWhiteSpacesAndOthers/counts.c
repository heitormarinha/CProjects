#include <stdio.h> 
 /* count digits, white space, others*/  
 main()  
{ 
    int character, i, numberOfWhiteSpaces, nother;
    int numberOfDigits[10];
    numberOfWhiteSpaces = nother = 0;  
    
    for (i = 0; i < 10; ++i)
    {
        numberOfDigits[i] = 0;
    }
    while ((character = getchar()) != EOF)
    {
        if (character >= '0' && character <= '9')
        {
            ++numberOfDigits[character-'0'];
        } 
        else if (character ==' ' || character == '\n' || character == '\t')
        {
            ++numberOfWhiteSpaces;
        }
        else  
        {
            ++nother;
        }
    }
    printf("digits =");
    for (i = 0; i < 10; ++i)
    {
        printf(" %d", numberOfDigits[i]);
    }
    printf(", white space= %d, other= %d\n",  numberOfWhiteSpaces , nother ); 
}  
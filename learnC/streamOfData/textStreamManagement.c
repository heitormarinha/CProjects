#include <stdio.h> 
//Symbolic constant representation area.
#define IN 1  /* inside a word*/
#define OUT 0  /* outside a word*/  
/* count lines, words, and characters in input*/  
main()  
{
    int character, numberOfLines, numberOfWords, numberCharacters, state;
    state= OUT; 
    numberOfLines = numberOfWords = numberCharacters = 0;
    //Test if c has a end of file value defined in stdio.h
    while ((character = getchar()) != EOF)
    {  
        ++numberCharacters;
        if ( character == '\n' )
        {
            ++numberOfLines;
        }
        if (character ==' ' || character == '\n' || character == '\t')
        {
            state= OUT; 
        }
        else if (state== OUT)
        {
            state= IN;  
            ++numberOfWords;
        }  
    }  
    printf("%d %d %d\n", numberOfLines, numberOfWords, numberCharacters);
}
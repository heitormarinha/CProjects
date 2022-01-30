#include <stdio.h>  
//Symbolic constant representation area.
#define MAXLINE 1000 /* maximum input line size*/  
//Methods prototypes.
int getlines(char s[], int lim);  
void copy(char to[], char from[]);  
/* print longest input line*/  
main()
{
    int currentLine, largestLine;  /* current line length*/  /* maximum length seen so far */  
    char line[MAXLINE]; /* current input line*/
    char longestLine[MAXLINE];    /* longest line saved here*/  
     largestLine= 0;
     while (( currentLine = getlines(line, MAXLINE) ) > 0)
    {
        if ( currentLine > largestLine)
        {
            largestLine= currentLine; 
            copy(longestLine, line);
        }
        if (largestLine> 0) /* there was a line*/
        {
            printf("%s", longestLine);
        }
    }
} 
/* getline: read a line into stream, return length*/
int getlines(char s[], int lim)
{
    int c, i;
    for (i=0; i<lim-1 && (c=getchar()) !=EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
  /* copy: copy 'from' into 'to'; assume to is big enough*/
  void copy(char to[], char from[])
{
    int i=0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
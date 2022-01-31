//Importing headers/library
#include <stdio.h>  
#include <string.h> 
//Definiton area.
#define MAXLINES 5000
//External variables.
char *lineptr[MAXLINES];
//Function Prototypes.
int readlines(char *lineptr[], int newLines);
void writelines(char *lineptr[], int newlines);
void querySort(char *lineptr[], int left, int right);
//Sort input lines.
void main()
{
    int newLines;
    if ((newLines = readlines(lineptr, MAXLINES)) >= 0)
    {
        querySort(lineptr, 0, newLines-1);
        writelines(lineptr, newLines);
    }
    else
    printf("error: input too big to sort\n");
}
//Definiton area.
#define MAXLENGTH 1000
//Standard functions
int getline(char *, int);//string.h library
char ·alloc(int);//string.h library

/* readlines: read input lines*/
int readlines(char *lineptr[], int maxlines)
{
    int len, newLines;
    char *p, line[MAXLENGTH];
    newLines = 0;
    while ((len = getline(line, MAXLENGTH)) > 0)
    {
        if (newLines >= maxlines || (p = alloc(len)) == NULL)
        {
            return -1;
        }
        else
        {
            line[len-1] = '\0'; ///I· delete newline*/
            strcpy( p, line );
            lineptr[newLines++] = p;
        }
        return newLines;
    }
}

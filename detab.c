#include <stdio.h>

/* replaces "\t" inserted in input with the proper number of blanks
 * Assume a fixed set of tab stops, say every 4 columns
 * Should 4 be a variable or a symbolic parameter?*/

#define TAB_NUM 4
#define MAXLEN 1000
#define MAXLINE 1000

char line[MAXLEN];
char newline[MAXLEN];

void replace_tabs(void);
int getline(void);


int main()
{
    int c;
    int len;
    extern char newline[];
    
    while ((len = getline()) > 0) 
        replace_tabs();
    return 0;
}

int getline(void)
{
    int i, c;
    extern char line[];

    for (i=0; (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
        {
            line[i] = c;
            ++i;
        }
    line[i] = '\0';
    return i;
}

void replace_tabs(void)
{
    int i;
    extern char line[], newline[];
    
    i = 0;
    while ((newline[i] = line[i]) != '\0')
    {
        if (line[i] == '\t')
            newline[i] = ' ';
        ++i;
    }
    printf("%s", newline);
}
    
    
    

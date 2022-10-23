#include <stdio.h>

#define MINLENGTH 8
#define MAXLENGTH 1000

int printline(char line_to_print[], int minlength);


int main()
{
        int len; /*getchar*/
        char line[MAXLENGTH];
        char longline[MAXLENGTH];
            
        while ((len = printline(line, MAXLENGTH)) > 0)
            if (len >= MINLENGTH)
                printf("%s", line);
        return 0;
}

int printline(char line_to_print[], int minlength)
{
    int i;
    int c;
    
    for (i=0; i<=MAXLENGTH-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        line_to_print[i] = c;
    if (c == '\n') {
        line_to_print[i] = c;
        ++i;
    }
    line_to_print[i] = '\0';
    return i;
}
        
    


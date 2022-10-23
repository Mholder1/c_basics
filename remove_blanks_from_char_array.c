#include <stdio.h>

#define MINLENGTH 8
#define MAXLENGTH 1000

int getline(char line_to_print[], int minlength);
void copy(char to[], char from[]);

int main(void)
{
    char line[MAXLENGTH];
    int len, tail, inn;
    while((len=getline(line, MAXLENGTH)) > 0) {
        for(tail = len-1; line[tail] == ' ' ||
            line[tail] == '\t' ||
            line[tail] == '\n' ;tail--);
        if(tail >= 0){
            for(inn = 0; inn <= tail; inn++)
                putchar(line[inn]);
            putchar('\n');
        }
    }
    return 0;
}

int getline(char line_to_print[], int minlength)
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
        
    
void copy(char to[], char from[])
{
    int i;
    
    while ((to[i] = from[i]) > 0)
        ++i;
}

    
    
    
    

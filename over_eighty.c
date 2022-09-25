#include <stdio.h>

#define MAXLENGTH 1000
#define GOAL 8
#define MAX_ENTRIES 3

int getline(char line[], int maxline);

int main()
{
    /*char list_of_eightys[MAXLENGTH];*/
    char current_line[MAXLENGTH];
    int i, v, j;
    int len;
    
    i=0;
    v=0;
    
    while ((len=getline(current_line, MAXLENGTH)) > 0) {
        if (len > GOAL)
            printf("%s\n", current_line);
}
    /*for (j=0; j<=v; ++j)
        printf("%s", list_of_eightys[j]);*/
    return 0;
}

int getline(char line[], int maxline)
{
    int c, d;
    
    for (d=0; d<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++d)
        line[d]=c;
    if (c=='\n') {
    ++d;
    line[d]='\0';
}
    return d;
}

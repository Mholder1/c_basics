#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
	int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    char temp[MAXLINE*MAXLINE];
    int overMax;
    
    max = 0;
    overMax = 0;
    
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) 
            max = len;
            copy(longest, line);
        
        if (line[MAXLINE-2] != '\n'){
            int c, over;
            char buffer[MAXLINE*MAXLINE];

            over = 0;
            while ((c = getchar()) != '\n') {
                buffer[over] = c;
                ++over;
            }
            buffer[over] = '\0';

            if (over > overMax) {
                overMax = over;
                copy(longest, line);
                copy(temp, buffer);
            }
        } 
    }
        
    if (max > 0) /* there was a line */
        printf("%s", longest);
    if (overMax > 0)
        printf("%s", temp);
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) 
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = "\0";
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}



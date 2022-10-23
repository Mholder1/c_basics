#include <stdio.h>

#define MINLENGTH 8
#define MAXLENGTH 1000

int getline(char line_to_print[], int minlength);
void copy(char to[], char from[]);
void reverse(char s[]);

int main(void)
{
    char line[MAXLENGTH];
    int len, tail, inn;
    while((len=getline(line, MAXLENGTH)) > 0) {
        reverse(line);
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

void reverse(char s[]) {

	int i, n;
	char line[MAXLENGTH];

	for (i = 0; s[i] != '\0' && i < MAXLENGTH; ++i)
		;

	n = 0;
	if (i == 0 || s[i] == '\0')
		line[i] = '\0';
    
	if (i > 0)
		for (--i; i >=0; --i) {
			line[i] = s[n];
			n++;
		}

	printf("%s\n", line);
}
    
    

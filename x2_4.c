#include <stdio.h>

/* Write a function hat deletes each character in string1 that matches
 * any character in string 2 */
#define MAXLEN 500

void squeeze(char s[], char c[])
{
    int i, j, k;
    int found;
    char d[MAXLEN];
    
    for (i = j = 0; s[i] != '\0'; i++)
    {
        found = 0;
        for (k = 0; c[k] != '\0' && (found == 0); k++)
            {
            if (c[k] == s[i])
                {
                found = 1;
                break;
                }
            }
        if (found == 0)
            {
            d[j++] = s[i];
            }
    }
    d[j] = '\0';
    printf("%s\n", d);
}

int main()
{
    squeeze("hello", "cheese");
}

#include <stdio.h>

/* Write the function any (s1,s2) which returns the first location in 
the string s1 where any character from the string s2 occurs, or -1 
if s1 contains no characters from s2 */
 
int any(char string1[], char string2[])
{
    int i, location, j;
    
    for (i = 0; string1[i] != '\0'; ++i)
        for (j = 0; string2[j] != '\0'; ++j)
        {
            if (string1[i] == string2[j])
            {
                location = i;
                return location;
            }
            else
            {
                location = -1;
            }
        }
    return location;
}

int main()
{
    int loc;
    
    loc = any("llooh", "fiveh");
    if (loc == -1)
        printf("%d : String 1 contains no characters from string 2\n", loc);
    else
        printf("Index of string 1 which matches a character from string 2: %d\n", loc);
}

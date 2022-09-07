#include <stdio.h>

/* frequencies of different characters from an input */
/* characters, integers, special characters, tabs, newlines, spaces */

#define IN 0
#define OUT 0

main()
{
	int c, i, char_array[4], j, v, count;
	
	for (i = 0; i < 4; ++i)
	    char_array[i] = 0;
	
	while ((c = getchar()) != EOF)
	    if (c >= '0' && c <= '9')
	        ++char_array[0];
	    else if (isalpha(c) != 0)
	        ++char_array[1];
	    else if (c == ' ' || c == '\n' || c == '\t')
	        ++char_array[2];
	    else
	        ++char_array[3];
	
	count = 4;
	
	for (j = 0; j < count; ++j) {
		if (j == 0)
	        printf("integers: ");
	    else if (j == 1)
	        printf("letters: ");
	    else if (j == 2)
	        printf("whitespace: ");
	    else
	        printf("special chars: ");
	    for (v = 0; v < char_array[j]; ++v)
	        printf("-");
	    printf("\n"); 
	}
}

#include <stdio.h>


/* Write a function rightrot(x, n) that returns he value of the integer 
 * x rotated to the right by n bit positions */

int rightrot(unsigned x, int n)
{
    int y;
    int mask = ~(~0 << n); 
    int bitlen = 7 - n; /* to do : create function to find bitlen */
    
    y = (x & mask) << bitlen;
    
    x = (x >> n) | y;
    
    return x;
}

int main()
{
    unsigned x = 123;
    int n = 4;
    int my_n;
    my_n = rightrot(x, n);
    printf("%d\n", my_n);
}

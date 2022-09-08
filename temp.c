#include <stdio.h>

float convers(float f);

int main()
{
	float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, convers(fahr));
        fahr = fahr + step;
    }
	return 0;
}

float convers(float fahr)
{
    float f;
    
    f = (5.0/9.0) * (fahr-32.0);
    return f;
}

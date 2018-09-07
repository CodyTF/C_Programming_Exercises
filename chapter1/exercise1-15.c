#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr_to_cels(float fahr, float cels);

main()
{
	float fahr, cels = 0;

	while (fahr < UPPER) {
		printf("%3.0f %6.1f\n", fahr, fahr_to_cels(fahr, cels));
		fahr = fahr + 20;		
	}
}

float fahr_to_cels(float fahr, float cels) 
{
	cels = (5.0/9.0) * (fahr - 32.0);
	return cels;
}

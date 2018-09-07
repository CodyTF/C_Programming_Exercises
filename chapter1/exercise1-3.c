#include <stdio.h>

/* Exercise 1-3 from book. Add heading to conversion table */

main() 
{
	float fahr, celsius;
	int upper, lower, step;

	lower = 0;
	upper = 300;
	step = 20;
	char fa[] = "Farenheit";
	char ce[] = "Celsius";

	printf("%s\t%s\n", fa, ce);
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

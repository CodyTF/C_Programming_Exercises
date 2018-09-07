#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0 	/* outside a word */
main()
{
	int c, state, n, i;
	int nchar[10];
	
	n = i = 0;
	state = OUT;

	for(i = 0; i < 10; ++i) {
		nchar[i] = 0;
	}

	while ((c = getchar()) != EOF) {
	        if (n >= 10) {
			break;
		} else if (c == ' ' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;	
			i = 0;

			while (i <= nchar[n]) {
				printf("|");
				++i;
			}
			putchar('\n');
			++n;
		} else {
			++nchar[n];
		}
		putchar(c);	
	}
}

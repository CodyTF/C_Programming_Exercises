#include <stdio.h>

main()
{
	int c, boolean;
	
	boolean = 0; 

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			boolean = 0;
		} 

		if (boolean == 0) {
			putchar(c);
		}

		if (c == ' ') {
			boolean = 1;
		}
	}
}	

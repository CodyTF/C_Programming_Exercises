#include <stdio.h>

main() 
{
	int c, bl, tb, nl;

	bl = 0;
	tb = 0;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++bl;
		if (c == '\t')
			++tb;
		if (c == '\n')
			++nl;
	}
	printf("%s%d\n", "Number of blankspaces: ", bl);
	printf("%s%d\n", "Number of tabs: ", tb);
	printf("%s%d\n", "Number of new lines: ", nl);
}

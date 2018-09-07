#include <stdio.h>

main()
{
	int c, i, n;
	char character; 
	int nchar[26];

	for(i = 0; i < 26; ++i) {
		nchar[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			++nchar[c - 'a'];
		}
	}
	for(i = 97; i < 122; ++i) {
		character = i;
		printf("%c", i);
		for (n = 0; n < nchar[i - 97]; ++n) {
			printf("|");
		}
		printf("\n");
	}
}

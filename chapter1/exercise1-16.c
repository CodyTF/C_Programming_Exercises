#include <stdio.h>
#define MAXLINE 1000 	/* maximum input line size */

int getLine(char line[], int maxline);

/* prints longest input line */
int main()
{
	int len;	/* current line length */
	int max; 	/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
		}
	}
	if (max > 0) {	/* there was a line */
		printf("%d", max);
	}
	return 0;
}

/* getline: read a line into s, return length */
int getLine(char line[], int maxline)
{
	int c, i;

	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

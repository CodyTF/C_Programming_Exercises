#include <stdio.h>
#define MAXLIMIT 1000

void reverse(char word[], char reverse_word[], int maxlimit);

int main()
{
  char word[MAXLIMIT];
  char reverse_word[MAXLIMIT];

  reverse(word, reverse_word, MAXLIMIT);

  printf("%s", reverse_word);
  return 0;
}

void reverse(char word[], char reverse_word[], int maxlimit) {
  int i, c, j, q;

  j = q = 0;

  for(i = 0; i < maxlimit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    word[i] = c;
  }

  for(j = i - 1; j >= 0; --j) {
    reverse_word[q++] = word[j];
  }
}

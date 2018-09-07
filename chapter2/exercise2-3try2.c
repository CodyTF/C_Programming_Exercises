#include <stdio.h>
#include <ctype.h>
#define MAXCHAR 1000

int getLine(char s[], int maxchar);
int htoi(char s[]);

int main()
{
  int maxchar = MAXCHAR;
  char s[maxchar];

  getLine(s, maxchar);
  printf("%d", htoi(s));

  return 0;
}

int getLine(char s[], int maxchar)
{
  int i, c;

  for(i = 0; i < maxchar - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  return i;
}

int htoi(char s[])
{
  int i, q, c, sum;

  i = q = 0;

  if (s[0] == '0' && s[1] == 'x' || s[1] == 'X') {
    i = 2;
  }

  for(; c = s[q] != EOF && c != '\n'; q++) {}

  sum = 0;
  for(; i < MAXCHAR - 1 && (c = s[i]) != EOF && c != '\n'; ++i) {
    if(isdigit(c)) {
      sum += c - '0';
    } else if (c >= 'a' && c <= 'f') {
      sum += c - 'a' + 10;
    } else if (c >= 'A' && c <= 'F') {
      sum += c - 'A' + 10;
    }
  }

  return sum;

}

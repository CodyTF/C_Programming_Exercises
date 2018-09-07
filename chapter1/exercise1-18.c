#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);

int main()
{
  int len;
  char line[MAXLINE];

  len = getLine(line, MAXLINE);
  printf("%d\n", len);
  printf("%s", line);
}

int getLine(char s[], int lim)
{
  int c, i, j;

  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
  }
  for(j = i; j > 0; --j) {
    if(s[j] == '\t' || s[j] == ' ' || s[j] == '\n') {
      s[j] = '\0';
    }else {
      break;
    }
  }
  s[++j] = '\n';
  return j;
}

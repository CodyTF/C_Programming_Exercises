#include <stdio.h>

#define SPLIT_LENGTH 30
#define MAXLINE 1000

int getLine(char line[], int maxline);
void splitLine(char line[]);

int main()
{
  char line[MAXLINE];
  int maxline, array_length;

  maxline = MAXLINE;
  array_length = getLine(line, maxline);
  splitLine(line);
  printf("%s", line);

  return 0;
}

void splitLine(char line[])
{
  int c, length, pos, i;

  length = SPLIT_LENGTH;
  pos = i = 0;

  while((c = getchar()) != EOF) {
    if (i == length) {
      pos = i;
      while(line[pos] != ' ') {
        --pos;
      }
      line[pos] = '\n';
      i = pos;
    }
    line[i] = c;
  }
}

int getLine(char line[], int maxline)
{
  int c, i;

  for(i = 0; i < maxline - 1 && ((c = getchar()) != EOF && c != '\n'); ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

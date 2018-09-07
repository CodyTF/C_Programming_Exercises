#include <stdio.h>

#define MAXLINE 1000
#define COLUMN_WIDTH 8
#define COLUMN_SPLIT 2

int array_length;
void getLine(char line[], int maxline);
void splitLine(char line[], char newline[]);

int main()
{
  char line[MAXLINE], newline[MAXLINE];

  getLine(line, MAXLINE);
  splitLine(line, newline);

  printf("%s", newline);

  return 0;
}

void getLine(char line[], int maxline)
{
  extern int array_length;
  int i, c;

  for (i = 0; i < maxline - 1 && ((c = getchar()) != EOF && c != '\n'); ++i) {
    line[i] = c;
  }
  array_length = i;
}

void splitLine(char line[], char newline[])
{
  extern int array_length;
  int in_word, c, i, col_remaining, current_col, pos;

  in_word = 0;
  col_remaining = COLUMN_WIDTH;
  current_col = COLUMN_SPLIT;
  pos = 0;

  for(i = 0; i < array_length - 1; ++i) {
    c = line[i];
    newline[i] = c;
    if (c >= 'a' || c <= 'z') {
      in_word = 1;

    --col_remaining;
    if(col_remaining == 0) {
      ++current_col;
    }
    if (col_remaining == 0 && current_col == COLUMN_SPLIT) {
      pos = i;
      if (in_word = 0) {
        newline[i] = '\n';
      } else {
        while(line[pos--] != ' ') {
          /* do nothing */
        }
        newline[pos] = '\n';
        i = pos;
        current_col = 0;
        col_remaining = COLUMN_WIDTH;
      }
    }
  }
  }
}

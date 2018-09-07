#include <stdio.h>

#define MAXLINE 1000
#define TAB_STOP 8

void detab(char line[], int maxline);

int main()
{
    char line[MAXLINE];
    int maxline = MAXLINE;

    detab(line, maxline);
    printf("%s", line);
}

void detab(char line[], int maxline)
{
  int c, i, j, space_to_next_tabstop;

  space_to_next_tabstop = TAB_STOP - 1;

  for(i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    if(c == '\t') {
      for(j = 0; j < space_to_next_tabstop; ++j) {
        line[++i] = ' ';
      }
    } else {
      line[i] = c;
    }

    if(space_to_next_tabstop == 0) {
      space_to_next_tabstop = TAB_STOP;
    }

    j = 0;
    --space_to_next_tabstop;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
}

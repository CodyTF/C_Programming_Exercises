#include <stdio.h>

int main()
{
  int i, c;
  i = 0;

  while (i < lim - 1) {
    c = getchar();
    if (c == EOF) {
      break;
    } else if(c == '\n') {
      break;
    } else {
      /* do something */
    }
    ++i;
  }
}

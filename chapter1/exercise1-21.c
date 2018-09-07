#include  <stdio.h>

#define TAB_STOP 8

int main()
{
  int i, c, blankcount;

  blankcount = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      blankcount = 0;
    }
    if (c == ' ' && blankcount >= TAB_STOP) {
      ++blankcount;

      if (blankcount == TAB_STOP) {
        putchar('\t');
        blankcount = 0;
      } else if (blankcount > TAB_STOP) {
        blankcount = blankcount / TAB_STOP;
        for (i = 0; i < blankcount; ++i) {
          putchar('\t');
        }
        for (i = 0; i < blankcount % TAB_STOP; ++i) {
          putchar(' ');
        }
        blankcount = 0;
        }
      } else {
        putchar(c);
    }
  }
  return 0;
}

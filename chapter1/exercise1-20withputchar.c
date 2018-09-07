#include <stdio.h>

#define TAB_STOP 8

int main()
{
  int c, space_to_tabstop, i;

  space_to_tabstop = TAB_STOP;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      space_to_tabstop = TAB_STOP;
    } else {
      if (space_to_tabstop == 0){
        space_to_tabstop = TAB_STOP;
      }
      if (c == '\t') {
          for(i = 0; i < space_to_tabstop; ++i) {
            putchar('-');
          }
          space_to_tabstop = space_to_tabstop - i;
      } else {
        putchar(c);
        space_to_tabstop--;
      }
    }
  }
  return 0;
}

#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main()
{

  int x, p, n, y;
  x = 3114111148;
  y = 2931310294;
  p  = 7;
  n = 9;

  printf("%d \n", setbits(x, p, n, y));

  return 0;
}

int setbits(int x, int p, int n, int y)
{
  int bitmask  = ~((~0) << n);
  return ((bitmask & y) << p) | (~(bitmask << p) & x);
}

#include <stdio.h>

int invert(int x, int p, int n);

int main()
{
  int x = 100;
  int p = 5;
  int n = 4;

  printf("%d \n", invert(x, p, n));

  return 0;
}

int invert(int x, int p, int n)
{
  return x ^ ((~((~0) << n)) << (p - (n - 1)));
}

#include <stdio.h>

int rightrot(int x, int n);

int main()
{
  int x = 100;
  int n = 3;

  printf("%d \n", rightrot(x, n));
  return 0;
}

int rightrot(int x, int n)
{
  return x >> n;
}

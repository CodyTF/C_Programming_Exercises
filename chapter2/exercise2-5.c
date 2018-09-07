#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
  char s1[10] = "hello\0";
  char s2[10] = "world\0";

  printf("%d \n", any(s1, s2));
  return 0;
}

int any(char s1[], char s2[])
{
  int i, c, j;

  for(i = 0; s1[i] != '\0'; ++i) {
      for(j = 0; (c = s2[j]) != '\0'; ++j) {
        if (c == s1[i]) {
          return i + 1;
        }
      }
  }
  return -1;
}

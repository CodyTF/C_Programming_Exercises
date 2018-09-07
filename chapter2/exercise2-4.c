#include <stdio.h>
#define MAXLINE 1000
#define YES     1
#define NO      0
void squeeze(char s1[], char s2[]);

int main()
{
  char s1[MAXLINE] = "hello\0";
  char s2[MAXLINE] = "world\0";

  squeeze(s1, s2);

  printf("%s \n", s1);

  return 0;
}

void squeeze(char s1[], char s2[])
{
  int i, j, c, q, state;

  for (i = j = 0; s1[i] != '\0'; ++i) {
    state = NO;
    for (q = 0; (c = s2[q]) != '\0'; ++q) {
      if (c == s1[i]) {
        state = YES;
      }
    }
    if (state == YES) {
       s1[i] = '\0';
    }
  }
}

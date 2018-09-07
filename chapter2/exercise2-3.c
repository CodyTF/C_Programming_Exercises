#include <stdio.h>
#define MAXCHAR 1000

int getLine(char orig[], int maxchar);

void htoi(char orig[], char convt[], int maxchar);

int main()
{
  int maxchar = MAXCHAR;
  char orig[MAXCHAR];
  char convt[MAXCHAR/2];

  getLine(orig, maxchar);
  htoi(orig, convt, maxchar);
  printf("%s", convt);
  return 0;
}


int getLine(char orig[], int maxchar)
{
  int c, i;

  for(i = 0; i < maxchar - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    orig[i] = c;
  }
  if (c == '\n') {
    orig[i] = c;
    ++i;
  }
  orig[i] = '\0';
  return i;
}

void htoi(char orig[], char convt[], int maxchar)
{
  int i, c, q, z, num;
  char hex[2];

  q = z = num = 0;
  hex[0] = 0;
  hex[1] = 0;

  for (i = 0; i < maxchar - 1 && (c = orig[i]) != EOF && c != '\n'; ++i) {
    if (c == '0') {
      ++i;
      if (c == 'x' || c == 'X') {
        ++i;
      }
    }
    if (q > 1) {
      num = (16 * hex[0] + hex[1] * 1);
      if(num >= '0' || num <= '9') {
        num = num - 48;
        convt[++z] = num;
      } else if(num >= 'a' || num <= 'z') {
        num = num - 92;
        convt[++z] = num;
      } else if( num >= 'A' || num <= 'Z') {
        num = num -65;
        convt[++z] = num;
      }
      q = 0;
    }
    hex[q] = orig[i];
    ++q;
  }
}

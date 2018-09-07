/* Program to compute the vaules of char, short, int, long(both signed and unsigned) */

#include <stdio.h>

long unpow(long base, long power);
long mspow(long base, long power);
long mxspow(long base, long power);

int main()
{
  long base, power;

  base = 2;

  printf("----------------------------------------------------------------------\n");
  printf("-----------------------UNSIGNED DATA TYPES----------------------------\n");
  printf("----------------------------------------------------------------------\n");
  power = 8;
  printf("%s %ld %s \n", "unsigned char min: ", 0 , "bits" );
  printf("%s %ld %s \n", "unsigned char max: ", unpow(base,power), "bits");
  printf("--------------------------------\n");

  power = 16;
  printf("%s %ld %s \n", "unsigned short min: ", 0, "bits");
  printf("%s %ld %s \n", "unsigned short max: ", unpow(base,power), "bits");
  printf("--------------------------------\n");

  power = 32;
  printf("%s %ld %s \n", "unsigned long min: ", 0, "bits");
  printf("%s %ld %s \n", "unsigned long max: ", unpow(base,power), "bits");
  printf("--------------------------------\n");

  power = 16;
  printf("%s %ld %s \n", "unsigned int min: ", 0, "bits");
  printf("%s %ld %s \n", "unsigned int max: ", unpow(base,power), "bits or");
  power = 32;
  printf("%s %ld %s \n", "unsigned int max: ", unpow(base,power), "bits");
  printf("----------------------------------------------------------------------\n");
  printf("-------------------------SIGNED DATA TYPES----------------------------\n");
  printf("----------------------------------------------------------------------\n");
  power = 8;
  printf("%s %ld %s \n", "signed char min: ", mspow(base,power), "bits");
  printf("%s %ld %s \n", "signed char max: ", mxspow(base,power), "bits");
  printf("--------------------------------\n");

  power = 16;
  printf("%s %ld %s \n", "signed short min: ", mspow(base,power), "bits");
  printf("%s %ld %s \n", "signed short max: ", mxspow(base,power), "bits");
  printf("--------------------------------\n");

  power = 32;
  printf("%s %ld %s \n", "signed long min: ", mspow(base,power), "bits");
  printf("%s %ld %s \n", "signed long max: ", mxspow(base,power), "bits");
  printf("--------------------------------\n");

  power = 16;
  printf("%s %ld %s \n", "signed int min: ", mspow(base,power), "bits");
  printf("%s %ld %s \n", "signed int max: ", mxspow(base,power), "bits");
  printf("or\n");
  power = 32;
  printf("%s %ld %s \n", "signed int min: ", mspow(base,power), "bits");
  printf("%s %ld %s \n", "signed int max: ", mxspow(base,power), "bits");
  printf("--------------------------------\n");

  return 0;
}

long unpow(long base, long power)
{
  long i, obase;
  obase = base;

  for(i = 0; i < power - 1; ++i) {
    base = base * obase;
  }

  return base - 1;
}

long mspow(long base, long power)
{
  long i, obase;
  obase = base;

  for(i = 0; i < power - 2; ++i) {
    base = base * obase;
  }
  return (base * -1);
}

long mxspow(long base, long power)
{
    long i, obase;
    obase = base;

    for(i = 0; i < power -2; ++i) {
      base = base * obase;
    }

    return base  - 1;
}

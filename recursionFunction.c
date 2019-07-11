#include <stdio.h>

int factorial(int n)
{
  int i, fac = 1;
  for(i = n; i > 0; i--)
  {
    fac *= i;
  }
  return fac;
}

int recfactorial(int n)
{
    if((n == 0) || (n == 1))
    {
      return 1;
    }
    return n*recfactorial(n-1);
}

int main(int argc, char const *argv[]) {
    printf("%d\n", factorial(5));
    printf("%d\n", recfactorial(5));
    printf("%d\n", recfactorial(5));
  return 0;
}

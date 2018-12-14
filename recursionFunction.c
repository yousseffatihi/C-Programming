#include <stdio.h>

int factorial(float n)
{
  int i, fac = 1;
  for(i = 0; i < n; i++)
  {
    fac *= i;
  }
  return fac;
}

int recfactorial(float n)
{
  int fac = 1;
  if(n == 0)
  {
    return 1;
  }
  else
  {
    fac *= recfactorial(n-1);
    return fac;
  }
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}

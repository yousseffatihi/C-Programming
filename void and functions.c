#include <stdio.h>

float getMaximum(float a, float b);
float getMaximum2(float a, float b, float c);
int choiceMenu();
void menu(int choice);

int main(int argc, char const *argv[]) {
  menu(choiceMenu());
  return 0;
}

float getMaximum(float a, float b)
{
  if(a > b)
    return a;
  else
    return b;
}

float getMaximum2(float a, float b, float c)
{
  int m = getMaximum(a, b);
  if( m > c)
    return m;
  else
    return c;
}

int choiceMenu()
{
  int c;
  printf("----Menu----\n");
  printf("1- Max of two numbers.\n");
  printf("2- Max of three numbers.\n");
  scanf("%d\n", &c);
  return c;
}

void menu(int choice)
{
  switch (choice) {
    case 1:
    {
      float var1, var2;
      printf("Give me two numbers :\n");
      scanf("%f%f", &var1, &var2);
      printf("The maximum is : %.2f\n", getMaximum(var1, var2));
      break;
    }
    case 2:
    {
      float var1, var2, var3;
      printf("Give me three numbers :\n");
      scanf("%f%f%f", &var1, &var2, &var3);
      printf("The maximum is : %.2f\n", getMaximum2(var1, var2, var3));
      break;
    }
    default :{
      printf("Sorry you typed worng :(\n");
      exit(0);
    }
  }
}

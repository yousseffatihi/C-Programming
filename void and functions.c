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
  printf("1- Max of 2 numbers.\n");
  printf("2- Max of 3 numbers.\n");
  printf("3- Max of 4 numbers.\n");
  printf("Your Choice : ");
  scanf("%d", &c);
  return c;
}

void getMaximum3()
{
    float a, b, c, d, max;
    printf("Give me 4 numbers : \n");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    max = getMaximum(a,b,c);
    if(max > d)
    {
        printf("The maximum is : %.2f", max);
    }
    else
    {
        printf("The maximum is : %.2f", d);
    }
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
      printf("Sorry you typed wrong :(\n");
    }
  }
}

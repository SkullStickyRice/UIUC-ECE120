#include <stdio.h>
#include <math.h>

int main()
{
  double d;
  int f;
  printf("enter a number:");
  scanf("%lf", &d);

  if (d < pow(2,31)) /* check if the input number smaller than 2^31*/
    {
      f = (int)d % 2;  
      {
	if (f == 0) /*check weither the input number devided bu 2 have a remains or not*/
	printf("the number is power of 2\n");
      else 
	printf("the number is not power of 2\n");
      }
    }
  else 
    printf("the number is too big\n");

  return 0;
}

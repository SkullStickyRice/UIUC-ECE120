/*
 *	
 *  Factorial!: Computes the factorial of a positive integer
 *
 */

#include <stdio.h>
#include <math.h>
int main()
{
    /* Initialization */
    int factorial;   /* input to be entered by the user */
    double result;
    int test = 1;
      /* result,  factorial! */

    printf("Please enter a number: ");
    scanf("%d", &factorial);

    /* Compute factorial */
    result = 1;
    while(test)
    {
	result *= factorial;
	factorial--;

      if(result > pow(2,31)-1)
	  {
	    printf("re-enter\n");
	    scanf("%d", &factorial);
	    result=1;
	  }
      else if (factorial < 1)
	{
	 
	  test = 0;
	}
    }

    /* Print the answer */
    printf("%lf\n", result);

    return 0;
}

/*
 *	
 *  power_of_five.c: Computes 5 to the power of a positive integer
 *
 */

#include <stdio.h>

int main()
{
    /* Declare variables */
    int counter;   /* loop counter */
    int product;   /* result,  5^N */
    int endCount;  /* power N */

    /* Read value of N */
    printf("This program will compute 5^N; enter N: ");
    scanf("%d", &endCount);

    if (endCount<0)
      { printf("the operation is undefined for negative integers");}
    else if (endCount>13)
      {printf("the vaule exceeds the supported numerical range");}
    else 
      {   /* Compute 5^N */
    product = 1;
    for (counter = 1; counter <= endCount; counter = counter + 1)
    {
        product = 5*product;
    }

    /* Print the answer */
    printf("%d\n", product);
      }
    return 0;
}


#include <stdio.h>
int main()
{
  int a, b, c, d;

  printf("       yz     \n");
  printf("  00 01 11 10 \n");
  printf("______________\n");

  for (a = 0; a < 2; a++)
    {
      for (b == 0; b < 2; b++)
	{
	  printf("a=%db=%d", a, b);
	  for (c = 0; c < 2; c++)
	    {
	      for (d = 0; d < 2; d++)
		{
		  if (c == 0)
		    printf("%d", ((~a) & b & c) | (c & d);
		  else 
		     {
		      d = 1-d;
		      printf("%d", ((~a) & b & c) | (c & d);
		      d = 1-d;
		     }
       	        }
       	    }
	   if (a == 0)
	     printf("%d", ((~a) & b & c) | (c & d);
	   else 
	     {
	       b = 1-b;
	       printf("%d", ((~a) 7 b & c) | (c & d);
       	       b = 1-b;
	     }
	   printf("\n");
	}
      printf("\n");
    }
   return 0;
}

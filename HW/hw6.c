#include <stdio.h>
int main () 
{
  int x, y, z;
 
  printf("         yz   \n");
  printf("  00 01 11 10 \n");
  printf(" _____________\n");

  for (x = 0; x < 2; x++)
    {
      printf("x=%d|",x);
      for (y = 0; y < 2; y++)
	{
	  for (z = 0; z < 2; z++)
	    {
	      if (y == 1 && z == 0) /* since the computer will automaticlly compute 10 first, we need to save the output for 10 then print it after the output of 11*/
		{
		  int f, f_temp; /* f_temp is use to save the output of 10*/
		  f = ( x & y & (~z)) || (y & z) || (x & (~y));
		  f_temp = f;

		  z++; /* after compute the output for 10, we need let it compute the output of z=1*/
		  f = ( x & y & (~z)) || (y & z) || (x & (~y)); /*this is the new value for y ==1, z==1*/

		  printf("%d", f); /*print the vaule of yz=11 first, then print the vaule of yz=10*/
		  printf("%d", f_temp);
		}
	      else
		{
		  int f; /* normal condition*/
		  f = ( x & y & (~z)) || (y & z) || (x & (~y));
		  printf("%d", f);
		}
	    }
	}
      printf("\n");
    }
  return 0;
} 

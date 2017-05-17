#include <stdio.h>
int main()
{
  int x, y, z, f, g;
  printf("\nTruth Tables\n");
  printf("x y z  f g\n");

  for (x = 0; x <= 1; x++)
    {
      for (y = 0; y <= 1; y++)
	{
	  for (z = 0; z <= 1; z++)
	    {
	      f = (x && (!y)) || ((!x) && y && (!z));
	      g = ((!x) && (!z)) || (x && z);
	      printf("%d %d %d  %d %d\n", x, y, z, f, g);
	    }
	}
    }
  return 0;
}

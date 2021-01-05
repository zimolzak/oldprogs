#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
  float p;
  int a, b, r, z, found, prime;
  div_t x;

  puts("Enter range for list of primes as follows: start,end");
  scanf("%d,%d", &a, &b);

  for(z=a; z<=b; z++)
    {
      p = sqrt(z);
      r = 1;
      found = 0;
      prime = 0;
      do
	{
	  r = r + 1;
	  x = div(z, r);
	  if(x.rem == 0)
	    found = 1;
	  if(r > p)
	    {
	      found = 1;
	      prime = 1;
	    }
	}
      while (found == 0);

      if (prime == 1)
	printf("%d ", z);
    }
  printf("\n");
  return 0;
}

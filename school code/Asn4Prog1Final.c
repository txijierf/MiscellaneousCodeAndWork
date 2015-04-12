#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {
    int n, x, result = 0;
    printf("Please enter the exponent: ");
    scanf("%d", &n);
    printf("Please enter the number: ");
    scanf("%d", &x);
    if (n > 0)
    {
		if (n % 2 == 0)
		{ 
			result = secondFunc(x, n);
			//result = result * result;
			printf("%d\n", result);
		}
		else
		  {
		  	result = power(x, n);
		    printf("%d\n", result);
		  }
    }
return 0;
}
//Original Power Function
int power(int x, unsigned int n)
{
  int i, result = 1;
    for (i = 1; i <= n; i++)
    {
      result = result * x;
    }
return result;
}

//Power Function to increase efficiency
int secondFunc(int x, unsigned int n)
{
int result = 1, i;
if(n % 2 != 0 || n == 2)
{
  for (i = 1; i <= n; i++)
    {
      result = result * x;
    }
}
else
  {
    result = secondFunc(x, n/2) * secondFunc(x, n/2);
  }
return result;
}

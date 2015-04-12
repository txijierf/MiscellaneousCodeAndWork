#include <stdio.h>
#include <time.h>

long fibonacci(long n)
{ if (n == 0 || n == 1)
    return n;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}
//Added Fibonacci method
long fibonacci2(long n)
{
	int a = 0, b = 1, next = a + b;
	while(n-->2)
	{
	  a = b;
	  b = next;
	  next = a + b;
	}
	return next;
}

int main()
{ long result, number, sndResult;
  long counter;
  clock_t start, end;
  printf("Enter an integer number: ");
  scanf( "%ld", &number );
  printf("Enter repeatitions: ");
  scanf( "%ld", &counter );
  start = clock();
  while(counter-- > 0)
  {
    result = fibonacci2(number);
    //sndResult = fibonacci(number);
  }
  end = clock();
  printf("Fibonacci(%ld) = %ld\n", number, result);
  //printf("Fibonacci(%ld) = %ld\n", number, sndResult);
  printf("Calculation time %f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
return 0;
}

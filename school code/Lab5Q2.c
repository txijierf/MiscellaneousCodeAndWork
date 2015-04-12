#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float tempVar2 = fib1(6);
printf("fib1 = %f\n",tempVar2);
float tempVar = fib2(6);
printf("fib2 = %f\n",tempVar);
}

int fib1(int n)
{

	if (n <= 2)
		return 1;
	else
		return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n)
{
const int N = 50;
int i;
float f[N];
f[0] = 0;
f[1] = 1;

for(i=2;i<N;i++) {
	f[i] = f[i-1] + f[i-2];
	//printf("f[i] = %f\n i = %d\n", f[i], i);
}

	if(n >= 0 && n < N)
		return f[n];

	if(n >= N)
		return fib2(n - 1) + fib2(n - 2);
}


#include <stdio.h>

int main(void)
{
double a = 87654321;
double b=0;
printf("a = %f\n", a);
printf("b = %f\n", b);
b = a + 1;
printf("b = %f\n", b);
if(a == b)
  printf("a == a + 1\n");
else
  printf("a != a + 1\n");
}

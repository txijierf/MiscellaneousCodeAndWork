#include <stdio.h>

int main(void)
{
int pVal=0;
int count=0;
printf("Enter a Positive Number: ");
scanf("%d", &pVal);
if(pVal >= 1)
{
  while(pVal != 1)
    {
    if(pVal % 2 == 0)
      {//Even
        pVal = pVal / 2;
        count++;
      }
    else
      {//Odd
        pVal = (3 * pVal) + 1;
        count++;
      }
    }
printf("Number of Operations Performed: %d\n", count);
}
else
{
  printf("Input value must be greater than 1.\n");
}
}

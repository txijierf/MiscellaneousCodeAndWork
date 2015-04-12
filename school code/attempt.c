#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("This is my attempt at creating an executable file in C.\n");
  int tempNum = 0;
  int i=0;

  for(i=1;i<=10;i++)
    {
      tempNum = tempNum + i;
    }

  printf("%d is an integer sum of continually adding an incremented integer until 10.\n", tempNum);
}


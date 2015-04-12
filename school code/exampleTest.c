#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i, j, k, l, m;

for(i=0; i<10;i++)
{
  if(i==0)
  {
    printf("Inside I:\n");
  }
  for(j=0; j<10;j++)
  {
   m++;
   printf("%d\n", m);
   if(j==0)
   {
     printf("Inside J:\n");
   }
    for(k=0; k<10;k++)
    {
     m++;
     printf("%d\n", m);
     if(k==0)
     {
       printf("inside K:\n");
     }
	for(l=0; l<10; l++)
	{
            m++;
	    printf("%d\n", m);
	    if(l=0)
	    {
		printf("inside L:\n");
 	    }
	}
    }
  }
}
}

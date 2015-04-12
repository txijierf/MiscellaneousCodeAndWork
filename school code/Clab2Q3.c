#include <stdio.h>

int main(void)
{
int pH=0;
printf("Enter the pH level: ");
scanf("%d", &pH);
if(pH > 7)
{
  if(pH < 12)
  {
    printf("Alkaline\n");
  }
  else
  {
    printf("Very Alkaline\n");
  }
}
else
{
  if(pH == 7)
  {
    printf("Neutral\n");
  }
  else
  {
    if(pH > 2)
    {
      printf("Acidic\n");
    }
    else
    {
      printf("Very Acidic\n");
    }
  }
}
}

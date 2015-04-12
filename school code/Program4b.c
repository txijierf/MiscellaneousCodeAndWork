#include <stdio.h>

int main(void)
{
int g, z, topInt, bottomInt, gcd, rInt, tempInt;
char r;
gcd = 2;

printf("Enter a fraction: ");
scanf("%d%c%d", &topInt, &r, &bottomInt);

while(gcd < bottomInt)
{
  z = topInt % gcd;
  g = bottomInt % gcd;
  if(z==0)
  {
    if(g==0)
    {
      topInt = topInt / gcd;
      bottomInt = bottomInt / gcd;
      rInt = topInt/bottomInt;
    }
    else
      gcd++;
  }
  else
    gcd++;
}

tempInt = topInt % bottomInt;
if(tempInt == 0)
{
tempInt = topInt / bottomInt;
printf("%d\n", tempInt);
}
else
{
printf("%d / %d\n", topInt, bottomInt);
}
}

#include <stdio.h>

int main(void)
{
int g, z, topInt, bottomInt, gcd, tempInt;
char r;
gcd = 2; //let the default greatest common denominator equal 2

printf("Enter a fraction: ");
scanf("%d%c%d", &topInt, &r, &bottomInt); /*take the user input of a fraction*/

/*If both the bottom and top are negative, make them positive*/
if(bottomInt < 0)
{
  topInt = -topInt;
  bottomInt = -bottomInt;
}

if(topInt < 0 && bottomInt < 0)
{
  topInt = -topInt;
  bottomInt = -bottomInt;
}

while(gcd < bottomInt)
{
  z = topInt % gcd; /*find the modulo of top integer and the GCD*/
  g = bottomInt % gcd; /*find the modulo of the bottom integer and the GCD*/
  if(z==0) /*if modulo is zero, then the top integer by the current GCD*/
  {
    if(g==0) /*if modulo is zero, then the bottom integer by the current GCD*/
    {
      topInt = topInt / gcd; /*divide the top integer by the GCD*/
      bottomInt = bottomInt / gcd; /*divide the bottom integer by the GCD*/
    }
    else
      gcd++;
  } /*If either the top or bottom integer of the fraction cannot be divided by zero
      increment the current GCD*/
  else
    gcd++;
}

tempInt = topInt % bottomInt;
if(tempInt == 0) /*If the top integer is divisble by the bottom integer*/
{/*The fraction can be simplified to equal a whole number*/
tempInt = topInt / bottomInt;
printf("%d\n", tempInt);
}
else
{/*If the top integer is indivisible to the bottom, return the simplified fraction*/
printf("In lowest terms: %d/%d\n", topInt, bottomInt);
}
}

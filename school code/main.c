#include <stdio.h>
int main(void)
{
int enteredInt, duration, outputInt, hours, minutes, i, g, k, m;
printf("Please enter a time: ");
scanf("%d", &enteredInt);
printf("Please enter a duration: ");
scanf("%d", &duration);

/*Seperate the hours and minutes of the entered time
  and store it as a total amount of minutes in a seperate
  integer var*/
hours = enteredInt / 100;
minutes = enteredInt % 100;

i = hours * 60;
i = i + minutes;

/*Seperate the hours and minutes of the duration time
  and store it as another integer value representing \
  the minutes*/
hours = duration / 100;
minutes = duration % 100;
g = hours * 60;
g = g + minutes;

k = i + g;
if(k > 1440)
{
k = k - 1440;
}

if(enteredInt < 0)
{
	enteredInt = -enteredInt;
}

outputInt = k / 60;
m = k % 60;
outputInt = (outputInt * 100) + m;
printf("The time is: %d\n", outputInt);
return 0;
}

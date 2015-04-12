#include <stdio.h>
int main(void)
{
int enteredInt, duration, outputInt, hours, minutes, i, g, k, m;
printf("Please enter a time in HHMM: ");
scanf("%d", &enteredInt);

while(enteredInt > 9999)
{
printf("Please enter time in four digit HHMM format:");
scanf("%d", &enteredInt);
}

printf("Please enter a duration: ");
scanf("%d", &duration);

while(duration > 9999)
{
printf("Please enter duration in four digit HHMM format:");
scanf("%d", &duration);
}

/*If the entered number is less than zero*/
if(enteredInt < 0)
{
/*Make it negativee*/
	enteredInt = -enteredInt;
}

/*Seperate the hours and minutes of the entered time
  and store it as a total amount of minutes in a seperate
  integer var*/
hours = enteredInt / 100;
minutes = enteredInt % 100;

/*Converts hours to minutes*/
i = hours * 60;
/*Add the remaining minutes*/
i = i + minutes;

/*Seperate the hours and minutes of the duration time
  and store it as another integer value representing \
  the minutes*/
hours = duration / 100;
minutes = duration % 100;

/*Convert the hours to minutes*/
g = hours * 60;
/*Add the remaining minutes*/
g = g + minutes;

/*k is the total number of minutes*/
k = i + g;

/*If the totaled minutes is equivalent to twenty four hours*/
if(k > 1440)
{
/*Take twenty four hours away from the total*/
while(k > 1440)
{
k = k - 1440;
}
}

/*Convert the total minutes back to hours*/
outputInt = k / 60;
/*Store the remaining minutes*/
m = k % 60;
/*Format the time properly*/
outputInt = (outputInt * 100) + m;
/*Display the resulting time*/
printf("The time is: %d\n", outputInt);
return 0;
}

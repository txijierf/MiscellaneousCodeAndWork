#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int days, startDay, col=7, i=0, j = 0;
printf("Enter Number of Days in the month: ");
scanf("%d", &days);

printf("Enter starting day of the week (1=sun, 7=sat): ");
scanf("%d", &startDay);

if(startDay == 0)
{
	printf("Error. Invalid day of week.\n");
	return 0;
}

/*for(j=1; j<startDay; j++)
		{
			printf("\t");
		}

for(i=0; i<days; i++)
	{
		printf("%d\t", i + 1);
		
		if((i + startDay) % 7 == 0)
			printf("\n");
	}*/

/*Blank spaces needed for the first row*/
j=1;
while(j < startDay)
	{
		printf("\t");
		j++;
	}

while(i < days)
{
	printf("%d\t", i + 1);

	if((i + startDay) % 7 == 0)
		printf("\n");

	i++;
}

printf("\n");
}


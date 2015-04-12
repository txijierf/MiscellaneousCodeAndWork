#include <stdio.h>
#include <stdlib.h>

int main(void)
{/*Exercise 1*/
int phone1, phone2, phone3;
printf("Enter Phone Number: ");
scanf("(%d)%d-%d", &phone1, &phone2, &phone3);
printf("%d.%d.%d\n", phone1, phone2, phone3);
}


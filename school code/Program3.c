#include <stdio.h>

int main(void)
{
float e, n, enterVar, invN;

printf("Enter the value of the closest approximation to e: ");
scanf("%f", &enterVar); /*take a decimal number which to approximate e to*/

n = 1;
invN = 1 / n;
e = invN;


while(invN >= enterVar) /*While the inverse of N is equal or greater than
the entered value*/
{
e = e + invN; /*Add the inverse of n to e*/
n++;/*Increment the value of n*/
invN = invN * (1 / n); /*multiply the current inverse of n to the running total*/
}

printf("%f\n", e); /*print out the approximation of e*/
}

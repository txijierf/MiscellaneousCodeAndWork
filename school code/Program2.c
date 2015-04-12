#include <stdio.h>

int main(void)
{
float loanAmount, yrlyIntrest, monthlyPmt, balance;
int numMonthlyPmt;

printf("Enter Loan Amount: \n");
scanf("%f", &loanAmount);/*Takes user input for loan amount*/
printf("Enter Yearly Interest Rate: \n");
scanf("%f", &yrlyIntrest); /*Take User Input of yearly interest*/
printf("Enter Monthly Payments: \n");
scanf("%f", &monthlyPmt); /*Takes user input of monthly payment*/
printf("Enter Number of Monthly Payments: \n");
scanf("%d", &numMonthlyPmt); /* take user input for number of payments per month. Usually 1*/

balance = (loanAmount - monthlyPmt) + (loanAmount * ((yrlyIntrest / 100) / 12));
printf("%.2f\n", balance);/*Always take the amount first payment of the loan*/

while (balance >= 0) /*while the balance is still above zero*/
{
loanAmount = balance; /*make the loan amount equal to remaining balance*/
balance = (loanAmount - monthlyPmt) + (loanAmount * ((yrlyIntrest / 100) / 12)); /*calculate remaining balance*/
if (balance > 0) /*if the balance is still positive*/
{
printf("%.2f\n", balance);/*print remaining balance*/
}/*repeat until loan is paid off*/
}

}

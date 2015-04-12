#include <stdio.h>
int main(void)
{
int i = 13 % 4;
int j = -13 % 4;
int k = 13 % 4;
int l = -13 % -4;

printf("i= %d j= %d k= %d l= %d",i ,j, k, l);

float m = 13 / 4;
float n = -13 / 4;
float o = 13 / -4;
float p = -13 / -4;

printf("m= %f n= %f o= %f p= %f",m ,n, o, p);
}

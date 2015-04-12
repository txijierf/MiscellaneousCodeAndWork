#include <stdio.h>

int main(void)
{
float sf, xf = 0.1f;
double sd, xd = 0.1;
int i;

for(i=0; i<1000; i++)
{
sf = sf + xf;
sd = sd + xd;
}
printf("float %f\n", 100.0-sf);
printf("double %lf\n", 100.0-sd);
}

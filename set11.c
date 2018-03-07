#include<stdio.h>
int main()
{
double base,exponent,exponential;
printf("enter a base number");
scanf("%lf",&base);
printf("enter a exponent number");
scanf("%lf",&exponent);
result=pow(base,exponent);
printf("%lf^%lf=%.2lf",result,base,exponent);
return 0;
}

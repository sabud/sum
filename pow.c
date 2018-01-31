#include<stdio.h>
#include<math.h>
int main()
{
double base,expo,power;
Printf("enter the base:");
scanf("%d", &base);
printf("enter exponent: ");
scanf("%d", &expo);
power = pow(base, expo);
printf("%d%d%d", base, expo, power);
return 0;
}

#include<stdio.h>
int main()
{
int i,a,b;
printf("Please Enter a Number");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
b==1;
break;
}
if(b==0)
{
printf("No%d is not a Prime Number",a);
}
else
printf("Yes%d is a Prime Number",a); 
return 0;
}

#include<stdio.h>
void main()
{
int remainder,reverse,num,temp=0;
printf("enter an integer:");
scanf("%d",&num);
temp=num;
while(num>0)
{
remainder=num%10;
reverse=reverse*10+remainder;
num/=10;
}
printf("Given number is =%d\n",temp);
printf("its reverse is =%d\n",reverse);
if(temp==reverse)
printf("number is a Palindrome\n");
else
printf("number is not a Palindrome\n");
}

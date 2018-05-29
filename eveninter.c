#include<stdio.h>
int main()
{
it r1,r2,rem,i;
printf("Enter first number:");
scanf("%d",&r1);
printf("Enter second number:");
scanf("%d",&r2);
for(i=r1;i<=r2;++i)
{
rem=i%2;
if(rem==0)
printf("\n%d",i);
}
return 0;
}

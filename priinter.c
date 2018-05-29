#include<stdio.h>
int main()
{
int low,high,flag,i;
printf("Enter low number:");
scanf("%d",&low);
printf("Enter high number:");
scanf("%d",&high);
printf("prime numbers between two intervals are:");
while(low<high)
{
flag=0;
for(i=2;i<low/2;++i)
{
if(low%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",low);
++low;
}
return 0;
}

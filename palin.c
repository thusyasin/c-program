#include<stdio.h>
int main()
{
int n,num,rev=0,rem;
num=n;
while(n!=0)
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(num==rev)
{
printf("%d is palindrome.",num);
}
else
{
printf("%d is not palindrome.",num);
}
return 0;
}

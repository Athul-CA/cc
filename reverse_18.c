#include <stdio.h>
void main()
{
int a,rev,b;
printf("enter a number:\t");
scanf("%d",&a);
rev=0;
while(a>0)
{
b=a%10;
rev=rev*10+b;
a=a/10;
}
printf("reversed number is=%d\n",rev);
}

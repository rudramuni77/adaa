#include<stdio.h>
void main()
{
int m,n,r;
  printf("enter two numbers");
scanf("%d%d",&m,&n);
while(n!=0)
{
r=m%n;
m=n;
n=r;
}
printf("lcm is %d",m);
}

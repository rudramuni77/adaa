#include <stdio.h>

int euclid(int m,int n)
{
 int r;
 while(n!=0)
 {
  r=m%n;
  m=n;
  n=r;
 }
 return m;
}
 
int euclid_rec(int m,int n)
{
 if(n==0)
  return m;
 else
  return euclid_rec(n,m%n);
}




void main()
{
 int a,b,n,x;
 printf("Enter the two numbers \n");
 scanf("%d%d",&a,&b);
 printf("Enter 1: for Euclid's method");
 scanf("%d",&n);
 switch(n)
 {
  case 1 :x=euclid(a,b);
          printf("GCD = %d",x);
          break;
  

 }
}


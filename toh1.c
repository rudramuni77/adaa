#include <stdio.h>
void hanoi(int n,char src,char temp,char dest)
{
if(n==1)
{printf("move %d from %c to %c\n",n,src,dest);
return;
}

hanoi(n-1,src,dest,temp);
printf("move %d from %c to %c\n",n,src,dest);
hanoi(n-1,temp,src,dest);
}
int main()
{
int n;
char src='A',temp='B',dest='C';
printf("enter the number of disks");
scanf("%d",&n);
hanoi(n,src,temp,dest);
return 0;
}

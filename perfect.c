#include<stdio.h>
int main()
{
int n,i,sum,l,u;
printf("enter lower limit:");
scanf("%d",&l);
printf("enter upper limit:");
scanf("%d",&u);
printf("perfect no within %d and %d are:",l,u);
for(n=l;n<=u;n++)
{
i=1;
sum=0;
while(i<n)
{
if(n%i==0)
sum=sum+i;
i++;
}
if(sum==n)
printf("%d\t",n);
}
}

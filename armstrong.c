#include<stdio.h>
int main()
{
int s,n,r,d=0;
printf("enter a number");
scanf("%d",&n);
s=n;
while(n!=0)
{
	r=n%10;
	d=d+r*r*r;
	n=n/10;
}
if(d==s)
printf("\n %d is armstrong number",s);
else
printf("\n %d is not armstrong number",s);
return 0;
}

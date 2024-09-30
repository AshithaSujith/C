#include<stdio.h>
int main()

{
int a[10][10],n,i,j,temp,sum;
printf("\nEnter the size of matrix:");
scanf("%d",&n);
printf("\nEnter %d values:",n*n);
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("\ngiven matrix is");
for(i=0;i<n;i++)
{
	printf("\n");
	for(j=0;j<n;j++)
	{
	printf("%d ",a[i][j]);
	}
}
for(i=1;i<n;i++)
{
	for(j=0;j<i;j++)
	{
		temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;
	}
}
printf("\ntranspose:");
for(i=0;i<n;i++)
{
	printf("\n");
	for(j=0;j<n;j++)
	{
	printf("%d ",a[i][j]);
	}
}
sum=0;
for(i=0;i<n;i++)
sum=sum+a[i][i];
printf("\nTrace of matrix:%d",sum);
}


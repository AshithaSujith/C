#include<stdio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
int l1,l2,n,i;
printf("enter the string 1\n");
scanf("%s",str1);
l1=strlen(str1);
printf("enter string2 \n");
scanf("%s",str2);
l2=strlen(str2);
printf("enter the position where the string is to be inserted\n");
scanf("%d",&n);
for(i=l1;i>=n;i--)
{
str1;
}
for(i=0;i<l2;i++)
{
str1[n+i]=str2[i];
}
str2[l2+i]='\0';
printf("after inserting the string in %s",str1);
}

#include<string.h>
#include<stdio.h>
int main()
{
char s[1000];
int len,n,i,c=0;
printf("enter the string:");
scanf("%s",s);
len=strlen(s);
for(i=0;i<len/2;i++)
{
	if(s[i]==s[len-i-1])
	c++;
}
if(c==i)
printf("PALINDROME\n");
else
printf("NOT PALINDROME\n");
return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
char c,fname[100];
FILE *fptr;
printf("enter filename to open\n");
scanf("%s",fname);
fptr=fopen(fname,"r");
if(fptr==NULL)
{
	printf("cannot open file\n");
	exit(0);
}
c=fgetc(fptr);
while(c!=EOF)
{
	printf("%c",c);
	c=fgetc(fptr);
}
fclose(fptr);
return 0;
}

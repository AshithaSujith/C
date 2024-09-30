#include<stdio.h>
#include <stdlib.h>
int main()
{
char c,fname1[100],fname2[100];
FILE *fptr1,*fptr2;
printf("enter the filename to open\n");
scanf("%s",fname1);
fptr1=fopen(fname1,"r");
if(fptr1==NULL)
{
	printf("cannot open file\n");
	exit(0);

}
printf("enter the filename to append\n");
scanf("%s",fname2);
fptr2=fopen(fname2,"a");
if(fptr2==NULL)
{
	printf("cannot open file\n");
	exit(0);
}
c = fgetc(fptr1);
while (c != EOF)
{
	fputc(c,fptr2);
	c = fgetc(fptr1);
}
printf("\nContent in %s appended to %s\n", fname1,fname2);
fclose(fptr1);
fclose(fptr2);
fptr2=fopen(fname2,"r");
while((c=fgetc(fptr2))!=EOF)
	printf("%c",c);
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
FILE *fp1,*fp2;
char ch,c;
if(argc!=3)
{
	printf("\n insufficient argument ");
	exit(0);
}
fp1=fopen(argv[1],"r");
fp2=fopen(argv[2],"w");
if(fp1==NULL || fp2==NULL)
{
	printf("\n unable to open file ");
	exit(0);
}
while(!feof(fp1))
{
	ch=fgetc(fp1);
	fputc(ch,fp2);
}
printf("\n file successfully copied \n");
fclose(fp1);
fclose(fp2);
fp2=fopen(argv[2],"r");
while((c=fgetc(fp2))!=EOF)
printf("%c",c);
}

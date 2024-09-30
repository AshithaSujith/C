#include <stdio.h>
struct student 
{
char name[50];
char address[50];
char place[50];
int pin;
} s[10];
int main()
{
int n,i;
printf("enter the limit:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("\n");
	printf("Enter details of student %d:\n",i);
	printf("Enter name: ");
	scanf("%s",s[i].name);
	printf("Enter address: ");
	scanf("%s",s[i].address);
	printf("Enter place: ");
	scanf("%s",s[i].place);
	printf("Enter pin: ");
	scanf("%d",&s[i].pin);
}
printf("\n--------------\n");
for(i =1;i<=n;i++)
{
printf("Name: ");
printf("%s\n", s[i].name);
printf("Address: %s\n", s[i].address);
printf("Place: %s\n", s[i].place);
printf("Pin: %d\n", s[i].pin);
printf("\n-------------\n");
}
return 0;
}

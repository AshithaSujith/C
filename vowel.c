#include <stdio.h>
#include <stdlib.h>
int main() {
char c;
int vowels = 0, specialChars = 0;
FILE *fptr;
fptr = fopen("demotxt", "r");
if (fptr == NULL) {
printf("Error opening file.\n");
return 1;
}
while ((c = fgetc(fptr)) != EOF) {
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
vowels++;
}
else if ((c < 'A' || (c > 'Z' && c < 'a') || c > 'z') && 
(c < '0' || c > '9')) {
specialChars++;
}
}
fclose(fptr);
printf("Frequency of vowels: %d\n", vowels);
printf("Frequency of special characters: %d\n", specialChars);
return 0;
}


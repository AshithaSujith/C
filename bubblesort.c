#include <stdio.h>
int main() {
int n, temp, j, i, a[10];
printf("Enter number of elements (max 10): ");
scanf("%d", &n);
if (n > 10 || n <= 0) {
printf("Invalid number of elements. Please enter a number between 1 and 10.\n");
return 1;
}
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
for (i = 0; i < n - 1; i++) {
for (j = 0; j < n - i - 1; j++) {
if (a[j] > a[j + 1]) {
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
printf("\nSorted array:\n");
for (i = 0; i < n; i++) {
printf("%d ", a[i]);
}
printf("\n");
return 0;
}


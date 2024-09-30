#include <stdio.h>
int main() {
int n, i, sum = 0, a[20], *ptr;
printf("Enter number of elements (max 20): ");
scanf("%d", &n);
if (n > 20) {
printf("Number of elements should not exceed 20.\n");
return 1;
}
printf("Enter %d elements:\n", n);for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
ptr = a;
for (i = 0; i < n; i++) {
sum += *(ptr + i);
}
printf("Sum of the elements: %d\n", sum);
return 0;
}


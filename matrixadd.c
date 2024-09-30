include <stdio.h>
#define MAX 10 
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("Element [%d][%d]: ", i, j);
scanf("%d", &matrix[i][j]);
}
}
}
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
printf("The resulting matrix is:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
}
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
result[i][j] = matrix1[i][j] + matrix2[i][j];
}
}
}
int main() {
int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
int rows, cols;
printf("Enter the number of rows and columns for the matrices: ");
scanf("%d %d", &rows, &cols);
printf("Matrix 1:\n");
inputMatrix(matrix1, rows, cols);
printf("Matrix 2:\n");
inputMatrix(matrix2, rows, cols);
addMatrices(matrix1, matrix2, result, rows, cols);
printMatrix(result, rows, cols);
return 0;
}


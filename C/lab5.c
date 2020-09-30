/* Task:
Find the number of elements of the matrix [MxN] which are greater than A and located in even rows and columns.*/

#include <stdio.h>

void main() {
    int M, N, A, num = 0;
    printf("Enter number of matrix rows: ");
    scanf("%d", &M);
    printf("Enter number of matrix columns: ");
    scanf("%d", &N);
    int arr[M][N];
    printf("Enter minimum number: ");
    scanf("%d", &A);
    
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("Enter element %d %d of matrix: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if ((arr[i][j] > A) && ((i % 2 != 0) || (j % 2 != 0))) {
              num++;
            }
        }
    } 
    printf("Number: %d\n", num);
}

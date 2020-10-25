/* Task: 
  Perform the task of laboratory work No. 5 for cases when the memory for a two-dimensional array is dynamically allocated depending
on the entered M, N, A and is correctly released at the end of the program.
  Implement two options for allocating memory for a two-dimensional array (it is possible in one program, 
it is possible in two separate programs, if there are two two-dimensional arrays in the task, and under the second - another, then one program is enough):
  1. Memory is allocated in one block for the size of all data. The row and column numbers are translated into the element number in the allocated memory block (see Hint);
  2. Memory is allocated separately for a one-dimensional array of pointers to a data line. Memory is then dynamically allocated under each data system.
  In the variant, the allocated memory at the end of the work of the algorithm must be correct for each work.
  Hint: with the first method of allocating memory to the i, j element of the MxN array, 
it will look like this: p [i * N + j] =… or * (p + i * N + j) =…. In the second case - p [i] [j] =… or * (* (p + i) + j) =….
*/

/* 1st option code: */ 

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main() {
    int *p;
    int M, N, A, num = 0;
    printf("Enter number of matrix rows: ");
    scanf("%d", &M);
    printf("Enter number of matrix columns: ");
    scanf("%d", &N);
    printf("Enter minimum number: ");
    scanf("%d", &A);

    p = (int*)malloc(M * N * sizeof(int));
    
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("Enter element %d %d of matrix: ", i + 1, j + 1);
            scanf("%d", (p + i*N + j));
        }
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if ((*(p + i*N + j) > A) && ((i % 2 != 0) && (j % 2 != 0))) {
              num++;
            }
            printf("%3d ", *(p + i*N + j));
        }
        printf("\n");
    } 
    printf("Number: %d\n", num);

    free(p);
}

/* 2nd option code: */

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main() {
    int **p;
    int M, N, A, num = 0;
    printf("Enter number of matrix rows: ");
    scanf("%d", &M);
    printf("Enter number of matrix columns: ");
    scanf("%d", &N);
    printf("Enter minimum number: ");
    scanf("%d", &A);

    p = (int**)malloc(M * sizeof(int*));
    
    for (int i = 0; i < M; i++){
        p[i] = (int*)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++){
            printf("Enter element %d %d of matrix: ", i + 1, j + 1);
            scanf("%d", &p[i][j]);
        }
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if ((p[i][j] > A) && ((i % 2 != 0) && (j % 2 != 0))) {
              num++;
            }
            printf("%3d ", p[i][j]);
        }
        printf("\n");
    } 
    printf("Number: %d\n", num);
    for (int i = 0; i < M; i++)  free(p[i]);
    free(p);
}

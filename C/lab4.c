  
/* Task:
Find the sum of those array values that are divisible by 2. */

#include <stdio.h>

void main() {
    int N, arr[N], * p_arr, sum = 0;
    p_arr = arr;
    printf("Enter the multiplicity of matrix: ");
    scanf("%d", &N); 
     
    for (int k = 0; k < N; k++) {
        printf("Enter the element %d of matrix: ", k + 1);
        scanf("%d", p_arr++);
    }
        p_arr = arr;
    for (int j = 0; j < N; j++) {
        printf("%3d", *p_arr++);
    }
        p_arr = arr;
        
    printf("\n");
    
    for (int i = 0; i < N; i++) {
        if (!(*p_arr % 2)) {
            sum = sum + *p_arr;
        }
        *p_arr++;
    }
    printf("Sum of elements multiple of 2 is: %d\n", sum);
}

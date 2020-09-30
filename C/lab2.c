/* Task:
Find a sum of even numbers from m to n.*/

/* Via WHILE cycle: */
        
#include <stdio.h>

void main() {
    int m, n, sum = 0;
    printf("Enter lower number: ");
    scanf("%d", &m);
    printf("Enter upper number: ");
    scanf("%d", &n);
    while (m<=n) {
        if(!(m%2)){
            sum+=m;
        }
        m++;
    }
    
    printf("Sum of even numbers: %d", sum);

}

/* Via FOR cycle: */

#include <stdio.h>

void main() {
    int m, n, sum = 0;
    printf("Enter lower number: ");
    scanf("%d", &m);
    printf("Enter upper number: ");
    scanf("%d", &n);
    for (int i = m; i<= n; i++){
        if(!(i%2)){
            sum+=i;
        }
    }
    printf("Sum of even numbers: %d", sum);

}

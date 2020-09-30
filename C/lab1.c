/* Task:
Expression a - = ((b ++ >> 2! = C) +1) | ++ c (type: int, int, unsigned char). 
The program should prompt the user for the values of the variables a, b, and c. 
Evaluate the specified expression and re-display the values of variables a, b, and c.*/

#include <stdio.h>

void main() {
    int a;
    int b;
    unsigned int c;
    
    printf("Enter value of variable a: ");
    scanf("%d", &a);
    printf("Enter value of variable b: ");
    scanf("%d", &b);
    printf("Enter value of variable c: ");
    scanf("%u", &c);
    a-=((b++>>2!=c)+1)|++c;
    printf("%d, %d, %u", a, b, c);

}

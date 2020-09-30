/* Task:
Print the word name of the number 0 <K <10. */

#include <stdio.h>

void main() {
    int k;
    printf("Enter the number: ");
    scanf("%d", &k);
    switch (k) {
        case 1: printf("One"); break;
        case 2: printf("Two");break;
        case 3: printf("Thre");break;
        case 4: printf("Four");break;
        case 5: printf("Five");break;
        case 6: printf("Six");break;
        case 7: printf("Seven");break;
        case 8: printf("Eight");break;
        case 9: printf("Nine");break;
        default: printf("The number must be 0<K<10");
    }
}

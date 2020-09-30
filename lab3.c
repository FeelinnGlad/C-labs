  /* Task:
Print the word name of the number 0 <K <10. */

#include <stdio.h>

void main() {
    int k;
    printf("Введите число: ");
    scanf("%d", &k);
    switch (k) {
        case 1: printf("Один"); break;
        case 2: printf("Два");break;
        case 3: printf("Три");break;
        case 4: printf("Четыре");break;
        case 5: printf("Пять");break;
        case 6: printf("Шесть");break;
        case 7: printf("Семь");break;
        case 8: printf("Восемь");break;
        case 9: printf("Девять");break;
        default: printf("The number must be 0<K<10");
    }
}

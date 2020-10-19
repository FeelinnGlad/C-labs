/* Task:
Using the combined data type (Struct) implement the program for working with the data according to the task variant. 
Enter auto price information in the record array and display it as a table.
Enter string values in a way that allows you to enter text that contains spaces.

An example of how program output:
┌───┬─────────────────────┬─────────────┐
│ № │        Model        │ Price mln ¥ │
├───┼─────────────────────┼─────────────┤
│ 1 │ Toyota Trueno AE86  │      2.2000 │
├───┼─────────────────────┼─────────────┤
│ 2 │ Mazda RX7 FD        │      3.8000 │
├───┼─────────────────────┼─────────────┤
│ 3 │ Mazda RX7 FС        │      3.6000 │
└───┴─────────────────────┴─────────────┘ */

#include <stdio.h>
#include <string.h>

struct Car {
  char name[20];
  float price;
};

void main(){
  int num;
  char temp;
  printf("Enter amount of cars: ");
  scanf("%d", &num);
  struct Car item[num];
  for (int n = 0; n < num; n++){
    printf("Enter model of car %d: ", n + 1);
    scanf("%c", &temp);
    scanf("%[^\n]s", &item[n].name);
    printf("Enter price of car %d: ", n + 1);
    scanf("%f", &item[n].price);
  }
  
  printf("\n");
  printf("┌───┬─────────────────────┬─────────────┐\n");
  printf("│ № │        Model        │ Price mln ¥ │\n");
  printf("├───┼─────────────────────┼─────────────┤\n");
  for (int n = 0; n < num; n++){
    printf("│ %d │ ", n + 1);
    printf("%s", item[n].name);
    for (int j = 0; j < 20 - (strlen(item[n].name)); j++) printf(" ");
    printf("│ %11.4f │\n", item[n].price);
    printf(n+1 == num ? "└───┴─────────────────────┴─────────────┘\n" : "├───┼─────────────────────┼─────────────┤\n");
  }
  
  }

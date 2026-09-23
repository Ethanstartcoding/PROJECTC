// PROBLEM 2: SIMULATING THE LOGIC OF A SIMPLE SNACK VENDING MACHINE

#include <stdio.h>
#include <stdbool.h>
int main(){
    int choice;
    float price;
    bool valid_item = true;
    printf("====VENDING MACHINE====\n");
    printf("1. Chips ($1.50)\n");
    printf("2. Chocolate ($2.00)\n");
    printf("3. Gummies ($1.25)\n");
    printf("Please enter your selection (1-3): ");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            price = 1.50;
            break;
        case 2:
            price = 2.00;
            break;
        case 3:
            price = 1.25;
            break;
        default:
            printf("Invalid selection");
            break;
    }
    if (!valid_item){
        return 1;
    }
    float total_inserted = 0.0;
    float coin;
    printf("Please insert coin ($0.25,$0.5,$1.00)\n");
    while (1){
        printf("Insert coin: ");
        scanf("%f", &coin);
        if (coin == 0.25f || coin == 0.5f || coin == 1.00f ) {
            total_inserted += coin;
            printf("Total inserted coin: %.2f\n", total_inserted);
        } else {
            printf("Coin rejection (INVALID COIN VALUE)\n");
            continue;
        }
    if (total_inserted >= price) {
        break;
        }
    }
    int total_cent = (int)(total_inserted * 100);
    int price_cent = (int)( price * 100);
    int change_cent = total_cent - price_cent;
    float change = (float)change_cent/100.0f;
   if (change > 0){
    printf("Your change is %.2f\n",change);
   } 
   printf("Dispensing items");
   return 0;
}

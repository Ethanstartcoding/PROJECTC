// DAY 1 (22/9)
//PROBLEM 1: GENERATING A SEQUENCE OF CLOCK PULSES FOR A BASIC CIRCUIT
#include <stdio.h>
int main(){
    int pulses;
    do {
       printf("Enter the number of pulses: ");
       scanf("%d",&pulses);

       if (pulses > 100){
        printf("Error: Buffer Overflow\nPlease enter again!\n");
        }
    } while (pulses >100);
    
    for(int i = 1; i <= pulses;i++) {
        if ((i % 5 == 0) && (i % 3 ==0)){
            printf("Pulse [X]: Minor sync\n");
        } else if (i % 5 == 0) {
            printf("Pulse [X]: MASTER SYNC\n");
        } else {
            printf("Pulse [X]: Standard tick\n");
        }     
    }
}
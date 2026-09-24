// PROBLEM 2: FIND THE AVAILABLE SEATS IN THE THEATER
#include <stdio.h>
int main(){
    int seat[3][4] = {{0,1,0,1},{1,0,0,0},{0,0,1,1}};
    int i,j;
    int avail_count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            if (seat[i][j] == 0){
                printf("Seats are available at row %d, column %d\n",i,j);
                avail_count++;
            } else if (seat[i][j] == 1){
                continue;
            }
        }
    }
    printf("There are total %d seats available",avail_count);
}

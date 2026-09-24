#include <stdio.h>
int main(){
    int temps[7] = {72, 75, 68, 80, 74, 71, 77};
    int i;
    int length = sizeof(temps)/sizeof(temps[0]);
    int lowest, highest = 0;
    float avg,sum = 0;
    for(i = 0; i < length; i++){
          if (lowest > temps[i]){
            lowest = temps[i];
          }
          if (highest < temps[i]) {
            highest = temps[i];
          }
          sum += temps[i];
    }
    avg = sum/length;
    printf("The lowest temperature is %d\nThe highest temperature is %d\nThe average tempurature is %.2f",lowest,highest,avg);
    
}

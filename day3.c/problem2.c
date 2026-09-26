#include <stdio.h>
int main(){
    int array[6] = {1,36,67,78,91,2};
    int* start_ptr = &array[0];
    int* end_ptr = &array[5];
    int temp;
    while(start_ptr < end_ptr){
        temp = *start_ptr;
        *start_ptr = *end_ptr;
        *end_ptr = temp;
        start_ptr++;
        end_ptr--;
    }
    
        for(int i=0; i < 6; i++){
            printf("%d\n",array[i]);
        };
    
}

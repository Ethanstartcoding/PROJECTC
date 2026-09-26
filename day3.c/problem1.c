// THE SECRET MESSAGE ENCODER
#include <stdio.h>
#include <string.h>
int main(){
    printf("Please enter a single word lowercase: ");
    char word[100];
    scanf("%s",word);
// store the word as a string
    int i = 0;
    while(word[i] != '\0'){
        if (word[i] >= 'a' && word[i] <= 'w'){
// if the character is from a to w --> +3 SCII
            word[i] = word[i] + 3;
        } else if (word[i] > 'w' && word[i] <= 'z'){
            word[i] = word[i] -23;
        }
        i++;
    }
    printf("The string after being encrypted is %s",word);
}

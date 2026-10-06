/*Kituu Cornelius
Bcs-03-0108/2025
number guessing game.
*/
#include <stdio.h>
int main(){
    int i=13,number=0,guess=0;
    printf("********");
    while(number != i){
         printf("\nPlease enter your guess:");
         scanf("%d", &number);
         printf("\n********");
         guess++;
         if(number < i){
            printf("\nToo low!");
         }
         else if(number > i){
            printf("\nToo high!");
         }
         else {
            printf("\n Congratulations!");
         }
    }
    printf("\nNumber of guesses:%d", guess);
    return 0;
}
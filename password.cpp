/*Kituu Cornelius
Bcs-03-0108/2025
password
V1
*/
#include <stdio.h>
const int password=1234;
int main(){
    int attempt;
    do{
        printf("Enter Password:");
        scanf("%d", &attempt);
    }
    while(attempt != password);
      
    printf("\nAccess Granted");
    
    return 0;
}
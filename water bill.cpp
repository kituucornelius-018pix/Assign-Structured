/*Kituu Cornelius 
Bcs-03-0108/2025
Water Bill
v1
*/
#include <stdio.h>
int main(){
    float unit,rate,total;
    printf("Please input the total amount of units consumed:");
    scanf("%f",&unit);
    if(unit<=30){
        rate=20;
        total=unit*rate;
        printf("\nTotal water bill:\t%2.f",total);
    }
    else if(unit<=60){
        rate=25;
        total=unit*rate;
        printf("\nTotal water bill:\t%2.f",total);
    }
    else{
        rate=30;
        total=unit*rate;
        printf("\nTotal water bill:\t%2.f",total);
    }
    return 0;
}
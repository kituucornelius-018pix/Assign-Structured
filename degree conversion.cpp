/*Kituu Cornelius 
Bcs-03-0108/2025
Farenheit to Celcius
*/
#include <stdio.h>
float convertTocelcius(float degrees){
    return (degrees - 32.0) * 5.0/9.0;
}

int main(){
    float degrees,celcius;
    printf("Please enter the temperature in degrees farenheit:");
    scanf("%f" ,&degrees);
    celcius=convertTocelcius(degrees);
    printf("The degrees in Celcius are: %.2f degrees celcius.", celcius);
    return 0;
}
/*Kituu Cornelius
  Bcs-03-0108/2025
  Program which prompts user for height,bank balance and phone number,then outputs them.
  V 1.1
*/
#include <stdio.h>
int main(){
    float height ;//%f
    double bank_balance ;//%lf
    int phone_number ;//%d

    printf("Please input your height in meters:\t\n");
    scanf("%f",&height);
    printf("Please input your bank balance:\t\n");
    scanf("%lf",&bank_balance);
    printf("Please input your phone number in this format; 0712345678:\t\n");
    scanf("%d",&phone_number);
    
    printf("These are your details:\n");
    printf("\tYour height:%.2f\n",height);
    printf("\tYour Bank balance:%.2lf\n",bank_balance);
    printf("\tYour Phone number:%d\n",phone_number);
    return 0;
}
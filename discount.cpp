/*Kituu Crnelius
Discount code
*/
#include <stdio.h>
int main(){
    float amount, discount,amount_to_pay ;
    printf("Please input the amount.");
    scanf("%f", &amount);

    if (amount>=10000){
        discount=0.2*amount;
        amount_to_pay=amount-discount;
        printf("\nDiscount:\t%2.f",discount);
        printf("\nAmount:\t%2.f",amount_to_pay);
    }
    else if (amount>=5000){
        discount=0.1*amount;
        amount_to_pay=amount-discount;
        printf("\nDiscount:\t%2.f",discount);
        printf("\nAmount:\t%2.f",amount_to_pay);
    }
    else{
        printf("\nNo discount");
        printf("\nAmount:\t%2.f",amount);

    }




    return 0;
}
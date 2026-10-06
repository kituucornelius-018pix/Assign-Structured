/*Kituu Cornelius Muunda
BCS-03-0108/2025
Bank withdrawals loop
*/
#include <stdio.h>
int main(){
    float withdraw_amount,bank_balance;
    printf("____________");
    printf("\nPlease enter your bank balance:");
    scanf("%f", &bank_balance);
    printf("\n____________");
    
    while(bank_balance>0){
        printf("\nPlease enter amount to withdraw:");
        scanf("%f", &withdraw_amount);
        bank_balance=bank_balance-withdraw_amount;
        printf("\nYour balance is:%.2f", bank_balance);
    }
    return 0;
}
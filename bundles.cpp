/*Kituu Cornelius
Bcs-03-0108/2025
Data bundle
v1
*/
#include <stdio.h>
int main(){
    int option;
    char decim;
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 100 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES");
    printf("\nEnter your choice(1-4):\t");
    scanf("%d%c",&option,&decim);
    printf("\n");
    if(option <1 || option >4 ||(decim != '\n' && decim != ' ')){
        printf("Please enter valid option;(1,2,3,4)\n");
        return 1;
    }

    switch(option){
        case 1:
            printf("You selected 100MB cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB  cost = 100 KES\n");
            break;
        case 3:
            printf("You selected 1GB cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB cost = 600 KES");
            break;
    }


    return 0;
}
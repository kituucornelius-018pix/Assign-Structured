/*Kituu Cornelius Muunda
BCS-03-0108/2025
Hotel Management*/
#include <stdio.h>
float averageRevenue(float revenue[7], int size){
    float sum=0;
    for(int i=0;i<size;i++){
        sum+= revenue[i];
    }    
    printf("Total Weekly Revenue is: %.2f ", sum);
    return sum/size;    
}
int main(){
    float revenue[7];
    int size=sizeof(revenue)/sizeof(revenue[0]);
    for(int i=0;i<size;i++){
        printf("Enter the revenue for the day %d: ", i+1);
        scanf("%f", &revenue[i]);
    }

    float avg = averageRevenue(revenue, size);
    printf("\nAverage Daily Revenue is: %.2f ", avg);

    return 0;
}    
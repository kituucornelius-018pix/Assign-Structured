/*Kituu Cornelius
BCS-03-0108/2025
Eligibility for exams
v1
*/
#include <stdio.h>
int main(){
    float attendance,marks;

    printf("Please input the following:");
    printf("\nAttendance:\t");
    scanf("%f",&attendance);
    printf("\nMarks:\t");
    scanf("%f",&marks);
    if(attendance <0 || attendance>100 || marks <0 || marks >100){
    printf("\vPlease input valid attendance or marks between 0 and 100");
    return 1;
    }
    if(attendance >75 && marks >=40){
        printf("\vEligible");
    }
    else{
        printf("\vNot eligible");
    }
    

    return 0;
}
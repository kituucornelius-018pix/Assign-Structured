/*Kituu Cornelius
BCS-03-0108/2025
Structures*/
#include <stdio.h>
#include <string.h>
struct Patient
{   int id;
    char name[50];
    int age;
    float temp;
    int days;
}e1;
int main(){
    float per_day=2500,total;
    struct patient;
    
    e1.id=01;
    strcpy(e1.name, "Brows");
    e1.age=50;
    e1.temp=39;
    e1.days=4;
    total=per_day*e1.days;

    printf("Patient ID:%d\n",e1.id);
    printf("Patient Name:%s\n",e1.name);
    printf("Patient Age:%d\n",e1.age);
    printf("Patient Temperature:%.1f\n",e1.temp);
    printf("No. of days admitted:%d\n",e1.days);
    printf("Total Bill:%.2f",total);
    return 0;
}
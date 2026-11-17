/*Kituu Cornelius
BCS-03-0108/2025
Structures*/
#include <stdio.h>
#include <string.h>
struct Product
{   int id;
    char name[50];
    float price;
    int quantity;
}e1;
int main(){
    float total;
    struct patient;
    
    e1.id=01;
    strcpy(e1.name, "Cup");
    e1.price=39;
    e1.quantity=4;
    total=e1.price*e1.quantity;

    printf("Product ID:%d\n",e1.id);
    printf("Product Name:%s\n",e1.name);
    printf("Product Price:%.1f\n",e1.price);
    printf("Product Quantity:%d\n",e1.quantity);
    printf("Total Cost:%.2f",total);
    return 0;
}
/*C files and funtions
Kituu Cornelius Muunda
*/
#include <stdio.h>
#include <stdlib.h>
void writeEmployee(){
    FILE *fptr;
    char name[40];
    char reg[20];
    char Department[30];
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\Employees.txt", "r");
    if (fptr == NULL){
        printf("Error opening write mode for employees file");
        exit(1);
    }
    printf("Enter Employees's Registration Number: ");
    fgets(reg, sizeof(reg), stdin);
    printf("Enter Employee's Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Employee's Department: ");
    fgets(Department, sizeof(Department), stdin);
    fprintf(fptr, "registration Number: %sEmployee Name: %sEmployee Department: %s", reg, name, Department);
    fclose(fptr);
}
void readEmployee(){
    FILE *fptr;
    int c;
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\Employees.txt", "r");
    if (fptr == NULL){
        printf("Error opening read mode for Employees file");
        exit(1);
    }
    while ((c = fgetc(fptr)) != EOF){
        putchar(c);
    }
    printf("\n");
    fclose(fptr);
}
void appendEmployee(){
    FILE *fptr;
    char name[40];
    char reg[20];
    char Department[30];
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\Employees.txt", "a");
    if (fptr == NULL){
        printf("Error opening append mode for Employees file");
        exit(1);
    }
    printf("Enter Employee's registration Number: ");
    fgets(reg, sizeof(reg), stdin);
    printf("Enter Employee's Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Employee's Department: ");
    fgets(Department, sizeof(Department), stdin);
    fprintf(fptr, "registration Number: %sEmployee Name: %sEmployee Department: %s", reg, name, Department);
    fclose(fptr);
}
int main(){
    writeEmployee();
    readEmployee();
    appendEmployee();
    printf("\nUpdated Employee List:\n");
    readEmployee();
    return 0;
}
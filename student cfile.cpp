/*Kituu Cornelius
Bcs-03-0108/2025
binary file with structure*/
#include <stdio.h>
#include <stdlib.h>
struct details{
    char name[50];
    char reg[20];
    int marks;
};
int main(){
    struct details dat;
    FILE *fptr;
    fptr = fopen("results.dat", "rb");
    if (fptr == NULL){
        printf("That's an error!");
        exit(1);
    }
    printf("--- Student Examination Results ---\n");
    printf("%-20s %-20s: %5s \n", "Name", "Registration Number", "Marks");
    printf("-----------------------------------\n");
    while (fread(&dat, sizeof(struct details), 1, fptr) == 1) {
        printf("%-20s %-20s: %5d\n", dat.name, dat.reg, dat.marks);
    }
    fclose(fptr);
    return 0;
}
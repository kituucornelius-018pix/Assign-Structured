/*Kituu Cornelius
Bcs-03-0108/2025
sales c_files*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    float sale, total=0;
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\sales.txt", "r");
    if (fptr == NULL){
        printf("Error in accessing file!");
        exit(1);
    }
    while (fscanf(fptr, "%f", &sale) == 1){
        total += sale;
    }
    printf("Total Sales: %.2f\n", total);
    fclose(fptr);
    return 0;
}
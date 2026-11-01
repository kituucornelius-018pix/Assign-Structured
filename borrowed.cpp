/*Kituu Cornelius 
Bcs-03-0108/2025
Library C files*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    char name[50];
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\borrowed_books.txt", "a");
    if (fptr == NULL){
        printf("That's an error!");
        exit(1);
    }
    printf("Enter name of Borrowed book:");
    scanf("%49[^\n]", name);
    fprintf(fptr, "Book: %s\n", name);
    fclose(fptr);
    printf("Book Successfully recorded."); 
    return 0;
}
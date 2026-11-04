//C Files and functions
#include <stdio.h>
#include <stdlib.h>
void saveStudent(){
    FILE *fptr;
    char name[40];
    char adm[20];
    char course[30];
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\students.txt", "w");
    if (fptr == NULL){
        printf("Error opening write mode for students file");
        exit(1);
    }
    printf("Enter Student's Admission Number: ");
    fgets(adm, sizeof(adm), stdin);
    printf("Enter Student's Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Student's Course: ");
    fgets(course, sizeof(course), stdin);
    fprintf(fptr, "Admission Number: %sStudent Name: %sStudent Course: %s", adm, name, course);
    fclose(fptr);
}
void displayStudent(){
    FILE *fptr;
    int c;
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\students.txt", "r");
    if (fptr == NULL){
        printf("Error opening read mode for students file");
        exit(1);
    }
    while ((c = fgetc(fptr)) != EOF){
        putchar(c);
    }
    printf("\n");
    fclose(fptr);
}
void addStudent(){
    FILE *fptr;
    char name[40];
    char adm[20];
    char course[30];
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\students.txt", "a");
    if (fptr == NULL){
        printf("Error opening append mode for students file");
        exit(1);
    }
    printf("Enter Student's Admission Number: ");
    fgets(adm, sizeof(adm), stdin);
    printf("Enter Student's Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Student's Course: ");
    fgets(course, sizeof(course), stdin);
    fprintf(fptr, "Admission Number: %sStudent Name: %sStudent Course: %s", adm, name, course);
    fclose(fptr);
}
int main(){
    saveStudent();
    displayStudent();
    addStudent();
    printf("\nUpdated Student List:\n");
    displayStudent();
    return 0;
}
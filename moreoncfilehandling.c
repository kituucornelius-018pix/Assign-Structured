//C files and funtions
#include <stdio.h>
#include <stdlib.h>
void writeToFile(){
    FILE *fptr;
    char sentence[300];
    char name[20];
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\newsample.txt", "w");
    if (fptr == NULL){
        printf("Error opening write mode for new sample file");
        exit(1);
    }
    printf("Enter your chracter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your character description: ");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "Name: %sCharacter description: %s", name, sentence);
    fclose(fptr);
}
void readFromFile(void){
    FILE *fptr;
    int character;
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\newsample.txt", "r");
    if (fptr == NULL){
        printf("Error opening read mode for new sample file");
        exit(1);
    }
    while ((character = getc(fptr)) != EOF){
        putchar(character);
    }
    fclose(fptr);
}

int main(){
    writeToFile();
    FILE *fptr;
    char sentence[300];
    char name[20];
    fptr = fopen("C:\\Users\\Kit\\Documents\\class work\\newsample.txt", "a");
    if (fptr == NULL){
        printf("Error opening append mode for new sample file");
        exit(1);
    }
    printf("Enter another character name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter another character description: ");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "Name: %sCharacter description: %s", name, sentence);
    fclose(fptr);

    readFromFile();
    return 0;
}
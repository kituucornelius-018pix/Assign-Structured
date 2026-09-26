/*Kituu Cornelius
Library Dues
*/
#include <stdio.h>
int main(){
    int bookID,fineRate,fineAmount;
    int dueDate;
    int returnDate;
    int daysOverdue;
    printf("Please input the following:");
    printf("\n\tBookID:\t");
    scanf("%d",&bookID);
    printf("\n\tDue date:\t");
    scanf("%d",&dueDate);
    printf("\n\tReturn Date:\t");
    scanf("%d",&returnDate);

    if (dueDate < 1 || dueDate > 31 || returnDate < 1 || returnDate > 31 || returnDate < dueDate) {
        printf("\nInvalid date. Please enter dates from 1 to 31, with the return date after the due date.\n");
        return 1;
    }

    daysOverdue=returnDate-dueDate;
    
    if(daysOverdue<=7){
        fineRate=20;
        fineAmount=fineRate*daysOverdue;
        printf("\nBook ID.no:\t%d",bookID);
        printf("\nDue Date:\t%d",dueDate);
        printf("\nReturn Date:\t%d",returnDate);
        printf("\nDays overdue:\t%d",daysOverdue);
        printf("\nCharges per day:\t%d",fineRate);
        printf("\nFine Amount:\t%d",fineAmount);
    }
        else if(daysOverdue<=14 && daysOverdue>=8){
        fineRate=50;
        fineAmount=fineRate*daysOverdue;
        printf("\nBook ID.no:\t%d",bookID);
        printf("\nDue Date:\t%d",dueDate);
        printf("\nReturn Date:\t%d",returnDate);
        printf("\nDays overdue:\t%d",daysOverdue);
        printf("\nCharges per day:\t%d",fineRate);
        printf("\nFine Amount:\t%d",fineAmount);
    }
        else{
        fineRate=100;
        fineAmount=fineRate*daysOverdue;
        printf("\nBook ID.no:\t%d",bookID);
        printf("\nDue Date:\t%d",dueDate);
        printf("\nReturn Date:\t%d",returnDate);
        printf("\nDays overdue:\t%d",daysOverdue);
        printf("\nCharges per day:\t%d",fineRate);
        printf("\nFine Amount:\t%d",fineAmount);
    }
    
    return 0;
}
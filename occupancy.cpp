/*Kituu Cornelius
Bcs-03-0108/2025
2d-array*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define FLOORS 5
#define ROOMS 10
int main(){
    srand(time(0));
    int occupancy[FLOORS][ROOMS];
    for(int i=0;i<FLOORS;i++){
        int occupied = 0;
        int empty = 0;

        for(int j=0;j<ROOMS;j++){
            occupancy[i][j]=rand()%2;

            if(occupancy[i][j] == 1){
                occupied++;
            }else{
                empty++;
            }
        }
        printf("\nFloor %d: %d occupied rooms| %d empty rooms\n",
               i + 1, occupied, empty);
    }
    return 0;
}
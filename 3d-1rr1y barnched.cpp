/*Kituu Cornelius
Bcs-03-0108/2025
3d-array-Mutiple brances in the hotel*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10
int main(){
    srand(time(0));
    int occupancy[BRANCHES][FLOORS][ROOMS];
    for(int i=0;i<BRANCHES;i++){
        printf("\n***************Branch %d***************\n", i+1);
        for(int j=0;j<FLOORS;j++){
            int occupied=0;
            int empty=0;
            for(int k=0;k<ROOMS;k++){
                occupancy [i][j][k]=rand()%2;
                if(occupancy[i][j][k] == 1){
                    occupied++;
                }else{
                    empty++;
                }
            }
            printf("\nFloor %d: %d occupied rooms| %d empty rooms\n", j+1, occupied, empty);
        }
    }
    return 0;
}

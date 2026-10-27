//Arrays
#include <stdio.h>
int main(){
    int max[6] = {45, 56, 65, 12, 34, 12};
    char n[8]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int arr[8]={10,20};
    printf("The value is %d\n", arr[7]);
    char name[18] = "Kituu Cornelius";
    printf("The name is %s\n", name);
    for(int i=0;i<15;i++){
        printf("The value is %c\n", name[i]);
    }
    int multi[3][3]={{3,2,0},{7,-9,0},{8,7,4}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("The value is %d\t", multi[i][j]);
        }
    }
    printf("\v\n");
    int mukri[2][2][3]={{{1,2,3},{4,5,6}},{{10,20,30},{40,50,60}}};
        for (int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                for(int k=0;k<3;k++){
                    printf("mukri[%d][%d][%d] = %d\t", i, j, k, mukri[i][j][k]);
                }
            }
        }
    return 0;
}
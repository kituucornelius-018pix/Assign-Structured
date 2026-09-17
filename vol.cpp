/*Kituu Cornelius
  Bcs-03-0108/2025
  Volume and surface area of a cyliner
  16/9/26
  ver 1.1
*/
#include <stdio.h>
int main(){
    float Pi=3.142;
    float r;
    float h;
   
    printf("Please input radius:\t");
    scanf("%f",&r);
    printf("\nPlease input height:\t");
    scanf("%f",&h);

    double a=2*Pi*(r*r)+2*r*Pi*h;
    double v=Pi*(r*r)*h;
    printf("\nSurface area is:\n%2.lf",a);
    printf("\nVolume is:\n%2.lf",v);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
  float x1,x2,y1,y2,z1,z2,Distance;
  printf("enter la x1: ");
  scanf("%f",&x1);
  
  printf("enter la y1: ");
  scanf("%f",&y1);
  
  printf("enter la z1: ");
  scanf("%f",&z1);
  
  printf("enter la a2: ");
  scanf("%f",&a2);
  
  printf("enter la y2: ");
  scanf("%f",&y2);
  
  printf("enter la z2: ");
  scanf("%f",&z2);
  
  Distance=sqrt(pow(x2-x1,2) +pow(y2-y1,2)+ pow(z2-z1,2));
  
  printf("Distance :%.2f",Distance);
  
    return 0;
}
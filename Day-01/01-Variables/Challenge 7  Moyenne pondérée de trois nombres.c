#include <stdio.h>

int main()
{
 float a,b,c,moyenne;
 printf("1er nombre :");
 scanf("%f",&a);
 printf("2ème nombre :");
 scanf("%f",&b);
 printf("3ème nombre :");
 scanf("%f",&c);
 moyenne=(a*2+b*3+c*5)/(2+3+5);
 printf("moyenne:%.2f",moyenne);
 
 
 
 
    return 0;
}
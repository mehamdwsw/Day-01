#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c,Moyenne;
  printf("enter la number: ");
  scanf("%f",&a);
  printf("enter la number: ");
  scanf("%f",&b);
  printf("enter la number: ");
  scanf("%f",&c);
  Moyenne=pow((a * b * c),(1.0/3.0));
  printf("Moyenne géométrique :%.2f",Moyenne);

  
  
  
  
  
  
  
  
  
  
  
  
  
  
    return 0;
}
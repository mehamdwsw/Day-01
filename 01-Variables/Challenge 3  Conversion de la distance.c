#include <stdio.h>

int main()
{
  float km, yards;
  printf("Entrez la kilomètres:");
  scanf("%f",&km);
   yards=km*1093.61;
   
  printf("Distance en yards:%.2f",yards);
  
    return 0;
}
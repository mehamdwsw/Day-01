#include <stdio.h>

int main()
{
     float temp,kelvin;
   
    printf("Entrez la température:");
    scanf("%f",&temp);
    kelvin=temp+273.15;
    printf("Température en degrés Kelvin: %.2f",kelvin);
    
    return 0;
}
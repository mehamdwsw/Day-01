#include <stdio.h>

int main()
{
 float kmh,ms;
 printf("Entrez la vitesse de km/h:");
 scanf("%f",&kmh);
 ms=kmh* 0.27778;
 printf("vitesse de km/s:%.2f",ms);
 
 
 
 
    return 0;
}
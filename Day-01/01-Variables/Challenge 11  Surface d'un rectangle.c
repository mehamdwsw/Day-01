#include <stdio.h>

int main()
{

    float lon,lar, Surface;
    
    printf("Enter la longueur: ");
    scanf("%f", &lon);
      printf("Enter la largeur: ");
    scanf("%f", &lar);

    Surface =lon * lar ;

    printf("Surface d'un rectangle: %.2f\n", Surface);


  
    return 0;
}
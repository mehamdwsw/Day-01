#include <stdio.h>
#include <math.h>

int main()
{

    float r, volume;
    const float PI = 3.14159;

    printf("Enter le rayon de la sphère: ");
    scanf("%f", &r);

    volume = (4.0 / 3.0) * PI * pow(r, 3);

    printf("volume d'une sphère: %.2f\n", volume);


  
    return 0;
}
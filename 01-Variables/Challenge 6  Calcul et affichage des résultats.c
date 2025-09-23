#include <stdio.h>

int main()
{
 float a,b;
 printf("Saisissez le nombre a :");
 scanf("%f",&a);
 printf("Saisissez le nombre b :");
 scanf("%f",&b);
 printf("a + b :%.2f\n",a+b);
 printf("a - b :%.2f\n",a-b);
 printf("a * b :%.2f\n",a*b);
 if (b==0){
     printf("La division par 0 est impossible.");
 }
 else{
      printf("a / b :%.2f\n",a/b);
 }
 
 
 
 
    return 0;
}
#include <stdio.h>

int main()
{
  float tem ;
  printf("Entrée le Température:");
  scanf("%f",&tem);
  if (tem<0){
      printf("Solide");
  }
  else if (tem>=100){
      printf("Gaz");
  }
  else{
       printf("Liquide");
  }
  
    return 0;
}
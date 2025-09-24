#include <stdio.h>

int main()
{
    int a;
    printf("Enter la Nombre entier à quatre :");
    scanf("%d",&a);
    
    printf("Nombre à quatre chiffres en ordre inverse:");
    while (a>0){
        printf("%d",a%10);
        a=a/10;
    }
    
    
  
    return 0;
}
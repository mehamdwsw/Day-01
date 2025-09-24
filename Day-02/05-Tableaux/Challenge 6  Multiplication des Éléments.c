#include <stdio.h>

int main() 
{
    int i=0,tot=0,b,mul;
    printf("Enter la nombre d'éléments:");
    scanf("%d",&b);
    printf("Enter la acteur de multiplication:");
    scanf("%d",&mul);
    
    int a[b];
        while(i < b){
            printf("nombre:");
            scanf("%d",&a[i]);
            i++;
        }
        int d=0;
        while(d<b)
        {
          tot=tot+mul*a[d];
          d++;  
        }
        
    
    printf("la :%d",tot);
    
    return 0;

}

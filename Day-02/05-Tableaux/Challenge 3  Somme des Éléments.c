#include <stdio.h>

int main() 
{
    int i=0,tot=0,b;
    printf("Enter la nombre d'éléments:");
    scanf("%d",&b);
    int a[b];
        while(i < b){
            printf("nombre:");
            scanf("%d",&a[i]);
            i++;
        }
        int d=0;
        while(d<b){
            tot=tot+a[d];
            d++;
        }
    
    printf("la somme totale:%d",tot);
    
    return 0;

}

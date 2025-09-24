#include <stdio.h>

int main() 
{
    int i=0,b;
    printf("Enter la nombre d'éléments:");
    scanf("%d",&b);
    int a[b];
        while(i < b){
            scanf("%d",&a[i]);
            i++;
        }
        int d=0;
        while(d<b){
            printf("%d",a[d]);
            d++;
        }
    
    
    return 0;
    

}

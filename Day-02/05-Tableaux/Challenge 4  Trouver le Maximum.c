#include <stdio.h>

int main() 
{
    int i=0,max,b;
    printf("Enter la nombre d'éléments:");
    scanf("%d",&b);
    int a[b];
        while(i < b){
            printf("nombre:");
            scanf("%d",&a[i]);
            i++;
        }
        int d=0;
	max=a[0];
        while(d<b)
        {
            if(a[d]>a[0])
            {
                max=a[d];
            }
          d++;  
        }
        
    
    printf("la Maximum:%d",max);
    
    return 0;
}

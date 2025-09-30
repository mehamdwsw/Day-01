#include <stdio.h>


int main()
{
    
    int t[]={2,3,4,5,6,7,1};
    int g;
    for(int i=0;i<6;i++){
        
        for(int v=0;v<6;v++){
            if (t[v]>t[v+1]){
                g=t[v];
                t[v]=t[v+1];
                t[v+1]=g;
                
            }
        }
    }
    for(int n=0;n<7;n++){
        printf("%d",t[n]);
    }

    
    
    
    
    
    
    
    
}
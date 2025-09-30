#include <stdio.h>

int main() {
    int t[] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    int tmp=0;

    for (int i = 0; i < n; i++) {
    
        for(int g=i+1;g<n;g++){
            if(t[i]>t[g]){
               tmp  = t[i];
               t[i] = t[g];
               t[g] = tmp;
            }
        }
    }
        for(int v=0;v<6;v++){
            printf("%d",t[v]);
        } 
    return 0;
}      


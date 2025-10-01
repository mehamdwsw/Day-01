#include <stdio.h>

int main() {
    int t[] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    int tmp=0;

    for (int i = 0; i < n; i++) {
    if (t[i]==33){
        printf("%d",t[i]);
        tmp=1;
    }
    
    }
    if(tmp==0){
        printf("nooooooooo");
    }
        
    return 0;
}      


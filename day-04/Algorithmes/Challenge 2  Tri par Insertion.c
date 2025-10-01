#include <stdio.h>

int main() {
    int t[] = {1, 2, 3,4, 5, 6};
    int n = 6,start=0,finish=5;
    int tmp=0;
    int i;
    while(1) {
        i=(finish+start)/2;
        if(t[i]==6){
            printf("%d",t[i]);
            break;
        }
        else if(t[i]<6){
            start=i + 1;
        }
        else if(t[i]>6){
            finish=i - 1;

           
        }
    }
      
    return 0;
}      


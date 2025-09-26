#include <stdio.h>

int Factorielle(int a){
    int t=1;
    for(int i=1;i<a;i++){
        t=t*(i+1);
    }
    return t;
} 

int main() 
{
    int d,v;
  printf("entrz la Factorielle:");
  scanf("%d",&v);
  printf("Factorielle : %d",Factorielle(v));
   
}
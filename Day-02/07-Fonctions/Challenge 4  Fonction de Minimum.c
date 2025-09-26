#include <stdio.h>

int Minimum(int a,int b){
    if (a>b){
        return b;
    }
    else{
        return a;
    } 
} 

int main() 
{
    int d,v;
  printf("entrz:");
  scanf("%d",&d);
  printf("entrz:");
  scanf("%d",&v);
  printf("Maximum : %d",Minimum(d,v));
   
}
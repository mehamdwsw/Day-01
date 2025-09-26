#include <stdio.h>

int Maximum(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    } 
} 

int main() 
{
    int d,v;
  printf("entrz:");
  scanf("%d",&d);
  printf("entrz:");
  scanf("%d",&v);
  printf("Maximum : %d",Maximum(d,v));
   
}
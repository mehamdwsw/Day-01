#include <stdio.h>
int Fibonacci(int c){
    if(c==0)return 0;
    if(c==1)return 1;
    int nex;
    int a=0,b=1;
    for(int i=2;i<=c;i++)
    {
        nex=a+b;
        a=b;
        b=nex;
    }
   return b; 
}
int main()
{
    int a=0,b=1,n;
    printf("Saisissez un entier :");
    scanf("%d",&n);
    
    printf("Fibonacci:%d",Fibonacci(n));
    return 0;
}
#include <stdio.h>

int main()
{
    char nom[10],prenom[10],sexe[10],email[80];
    int age;
    
    printf("enter le nom:");
    scanf("%s",nom);
    printf("enter le prenom:");
    scanf("%s",prenom);
    printf("enter le age:");
    scanf("%d",&age);
    printf("enter le sexe:");
    scanf("%s",sexe);
    printf("enter le adresse email:");
    scanf("%s",email);
    
    printf("nom:%s\nprenom:%s\nage:%d\nsexe:%s\nadresse email:%s",nom,prenom,age,sexe,email);



    return 0;
}

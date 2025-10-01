#include <stdio.h>
#include <string.h>
int main() 
{
    int numbre_livres = 0;
    int choix, n = 0;  
    char titres[50][100];   
    char auteurs[50][100];  
    float prix[100];        
    int quantite[100];      
    do { 
        printf("\n================== MENU ==================\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Mettre a jour la quantite\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        printf("-----------------------------\n");
        
        switch(choix) 
        {
            case 1:
            
            printf("Ajouter un titres:");
            scanf("%s",&titres[numbre_livres]);
            printf("Ajouter un auteurs:");
            scanf("%s",&auteurs[numbre_livres]);
            printf("Ajouter un prix:");
            scanf("%f",&prix[numbre_livres]);
            printf("Ajouter un quantite:");
            scanf("%d",&quantite[numbre_livres]);
            numbre_livres++;
            
                
                break;
            case 2:
            {
            for (int i = 0; i < numbre_livres; i++)
            {
                printf("-----------------------------\n");
                printf("titres:%s\n",titres[i]);
                printf("auteurs:%s\n",auteurs[i]);
                printf("prix:%d\n",prix[i]);
                printf("quantite:%.2f\n",quantite[i]);
            }
            break;
            }
            case 3:
            {
                
            char Rechercher[50];
            int tre=0;
            printf("Rechercher un livre par titre :");
            scanf("%s", Rechercher);
            for(int i=0;i<numbre_livres;i++)
            {
             if(strcmp(Rechercher,titres[i]) == 0) 
             {
                printf("titre :%s",titres[i]);
                tre=1;
             }  
             
            }
             if (tre==0)
            {
                printf("Le livre n'est pas disponible");
            }
            }
            
        }    
            

   

    }while (choix != 0);
 

}
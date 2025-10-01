#include <stdio.h>
#include <string.h>


int id=21,choix=0;
int nombre_zoo=20;int a;
int Afficher_index[]={1,2,3,4,5,6,7,8,9};
// تعريف الألوان
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
struct zoo{
    int z_id;
    char nom [50];
    char espece[50];
    int age;
    char habitat[50];
    float poids; 
};
struct zoo zoo[200]={
    {1, "Simba", "Lion", 5, "Savane", 190.5},
    {2, "Nala", "Lion", 4, "Savane", 175.0},
    {3, "ShereKhan", "Tigre", 8, "Jungle", 220.3},
    {4, "Baloo", "Ours", 12, "Forêt", 310.0},
    {5, "Raja", "Éléphant", 15, "Savane", 540.7},
    {6, "Marty", "Zèbre", 6, "Savane", 300.2},
    {7, "Gloria", "Hippopotame", 10, "Rivière", 450.0},
    {8, "Alex", "Lion", 7, "Savane", 200.0},
    {9, "Julien", "Lémurien", 3, "Jungle", 12.5},
    {10, "Melman", "Girafe", 9, "Savane", 390.8},
    {11, "Timon", "Suricate", 2, "Désert", 1.2},
    {12, "Pumbaa", "Phacochère", 5, "Savane", 120.0},
    {13, "Scar", "Lion", 11, "Savane", 210.4},
    {14, "Kaa", "Serpent", 6, "Jungle", 45.0},
    {15, "Iko", "Perroquet", 4, "Jungle", 2.1},
    {16, "Dumbo", "Éléphant", 3, "Savane", 320.0},
    {17, "Kiki", "Chien sauvage", 7, "Savane", 25.0},
    {18, "Donatello", "Tortue", 40, "Rivière", 90.5},
    {19, "Polly", "Oiseau", 5, "Jungle", 1.5},
    {20, "Kong", "Gorille", 13, "Jungle",180.0}};



void print_Menu(int a){
    switch (a){
    case 1:{
        printf("\n======================== Menu Gestion d un Zoo =========================|\n");
        printf("|1. Ajouter un animal                                                   |\n");
        printf("|2. Afficher les animaux                                                |\n");
        printf("|3. Modifier un animal                                                  |\n");
        printf("|4. Supprimer un animal                                                 |\n");
        printf("|5. Rechercher un animal                                                |\n");
        printf("|6. Statistiques                                                        |\n");
        printf("|0. Quitter                                                             |\n");
        printf("========================================================================|\n");
        printf("Votre choix ==> ");break;}
        case 2:{
        printf("\n============================== Afficher la: ==============================|\n");
        printf("|1. Afficher la liste complète                                            |\n");
        printf("|2. Afficher la Trier par nom.                                            |\n");
        printf("|3. Afficher la Trier par âge.                                            |\n");
        printf("|4. Afficher uniquement les animaux d’un habitat spécifique.              |\n");
        printf("|9. Retour au menu principal                                              |\n");
        printf("==========================================================================|\n");
        printf("Votre choix ==> ");break;}
        case 3:{
        printf("\n================================ Modifier ================================|\n");
        printf("|1. Modifier l’habitat d’un animal.                                       |\n");
        printf("|2. Modifier l’âge.                                                       |\n");
        printf("|9. Retour au menu principal                                              |\n");
        printf("==========================================================================|\n");
        printf("Votre choix ==> ");break;}
        case 4:{
        printf("\n================================ Rechercher ==============================|\n");
        printf("|1. Rechercher par id.                                                    |\n");
        printf("|2. Rechercher par nom.                                                   |\n");
        printf("|3. Rechercher par espèce.                                                |\n");
        printf("|9. Retour au menu principal                                              |\n");
        printf("==========================================================================|\n");
        printf("Votre choix ==> ");break;}
        case 5:{
        printf("\n======== Afficher uniquement les animaux d’un habitat spécifique. ========|\n");
        printf("|1. Animaux de l'habitat de la savane.                                    |\n");
        printf("|2. Animaux de l'habitat de la Rivière.                                   |\n");
        printf("|3. Animaux de l'habitat de la Jungle.                                    |\n");
        printf("|4. Animaux de l'habitat de la Forêt.                                     |\n");
        printf("|5. Animaux de l'habitat de la Désert.                                    |\n");
        printf("|6. Animaux de l'habitat de la votre choix.                               |\n");
        printf("|7. Retour au menu principal.                                             |\n");
        printf("==========================================================================|\n");
        printf("Votre choix ==> ");break;}
    }    
}
        
void Ajouter(){
            printf("Ajouter un Nom :");
            scanf("%s",zoo[nombre_zoo].nom);
            printf("Ajouter un espece:");
            scanf("%s",zoo[nombre_zoo].espece);
            printf("Ajouter un age:");
            scanf("%d",&zoo[nombre_zoo].age);
            printf("Ajouter un habitat:");
            scanf("%s",zoo[nombre_zoo].habitat);
            printf("Ajouter un poids:");
            scanf("%f",&zoo[nombre_zoo].poids);
            id++;
    
}
void Afficher() {
   for (int i = 0; i < nombre_zoo; i++){
                printf("-------------------------------------------\n");
                printf("id :%d\n",zoo[i].z_id);
                printf("nom :%s\n",zoo[i].nom);
                printf("espece :%s\n",zoo[i].espece);
                printf("age :%d\n",zoo[i].age);
                printf("habitat :%s\n",zoo[i].habitat);
                printf("poids :%.1f\n",zoo[i].poids);
                printf("-------------------------------------------\n");}
    }

void Trier_int(int a){
    switch (a){
        case 1:{
            struct zoo tmp;
            for (int i=0;i<nombre_zoo-1;i++){
               for (int v=0;v<nombre_zoo-1;v++){
                 if((strcmp(zoo[v].nom,zoo[v+1].nom)>0)){
                      tmp=zoo[v];
                      zoo[v]=zoo[v+1];
                      zoo[v+1]= tmp;
                    }
                }
            }break;
        }
        case 2:{
        struct zoo tmp;
            for (int i=0;i<nombre_zoo-1;i++){
               for (int v=0;v<nombre_zoo-i-1;v++){
                 if((strcmp(zoo[v].espece,zoo[v+1].espece)>0)){
                      tmp=zoo[v];
                      zoo[v]=zoo[v+1];
                      zoo[v+1]= tmp;
                    }
                }
            }break;
        }
        case 3:{
            struct zoo tmp;
            for (int i=0;i<nombre_zoo-1;i++){
               for (int v=0;v<nombre_zoo-1;v++){
                 if(zoo[v].age>zoo[v+1].age){
                      tmp=zoo[v];
                      zoo[v]=zoo[v+1];
                      zoo[v+1]= tmp;
                    }
                }
            }break;
        }
        case 4:{
            struct zoo tmp;
            for (int i=0;i<nombre_zoo-1;i++){
               for (int v=0;v<nombre_zoo-1;v++){
                 if(zoo[v].z_id>zoo[v+1].z_id){
                      tmp=zoo[v];
                      zoo[v]=zoo[v+1];
                      zoo[v+1]= tmp;
                    }
                }
            }break;
        }
        }
    }
                
                
        

            
            
            
int main()
{
    do {
     print_Menu(1);
     scanf("%d",&choix);
     switch(choix){
         case 1:{
             Ajouter();
             nombre_zoo++;
         break;    
        }
        case 2:{
                    do {
                        print_Menu(2);
                        scanf("%d",&choix);
                            switch(choix){
                                       
                                case 1:{//Afficher la liste complète
                                    Trier_int(4);
                                    Afficher();
                                    break;
                                }
                                case 2:{//Afficher la Trier par nom.
                                    
                                    Trier_int(1);
                                    Afficher();
                                    break;
                                }
                                case 3:{//Afficher la Trier par age.
                                    
                                    Trier_int(3);
                                    Afficher();
                                    break;
                                }
                                case 4:{//Afficher la Trier par espece.
                                    do {
                                        print_Menu(5);
                                        scanf("%d",&choix);
                                        switch(choix){
                                           case 1:{//Animaux de l'habitat de la savane.
                                            
                                            break;   
                                           } 
                                           case 2:{//Animaux de l'habitat de la Rivière.
                                            
                                            break;   
                                           } 
                                           case 3:{//Animaux de l'habitat de la Jungle.
                                            
                                            break;   
                                           } 
                                           case 4:{//Animaux de l'habitat de la Forêt.
                                               
                                            break;   
                                           } 
                                           case 5:{//Animaux de l'habitat de la Désert.
                                            
                                            break;   
                                           } 
                                            case 6:{//Animaux de l'habitat de votre choix.
                                            
                                            break;   
                                           }
                                        }
                        
                                    }while(choix != 7 );
                                    break;
                            }
                        
        }
                    }while(choix != 9 );
                                
                                
        break;            
                }
        case 3:{
             do {
                    print_Menu(3);
                    scanf("%d",&choix);
                        switch(choix){
                                   
                            case 1:{
                                
                            break;   
                            }
                            case 2:{
                                
                            break;  
                            }
                            
                        }
                }while(choix != 9 );
             
        break;    
        }
         
         
         
    
     }
    }while(choix != 0 );
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    

    return 0;
}
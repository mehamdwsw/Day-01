#include <stdio.h>
#include <string.h>
struct per{
    char name[100];
    char Numero[25];
    char email[100];
};

struct per p[100];
int nombre_contact=0;
char a_Rechercher[100];
int Indice=0;
int tre=0;

void print_Menu(){
        printf("\n======================== Menu Gestion de Contacts ===================\n");
        printf("|1. Ajouter un contact                                               |\n");
        printf("|2. Afficher tous les contacts                                       |\n");
        printf("|3. Rechercher un contact                                            |\n");
        printf("|4. Modifier un contact                                              |\n");
        printf("|5. Supprimer un contact                                             |\n");
        printf("|0. Quitter                                                          |\n");
        printf("|====================================================================|\n");
        printf("Votre choix: ");
}
void Ajouter(){
            printf("Ajouter un Nom :");
            scanf("%s",p[nombre_contact].name);
            printf("Ajouter un Numéro:");
            scanf("%s",p[nombre_contact].Numero);
            printf("Ajouter un e-mail:");
            scanf("%s",p[nombre_contact].email);
            
}
void Afficher(){

    for (int i = 0; i < nombre_contact; i++){
                printf("-------------------------------------------\n");
                printf("titres:%s\n",p[i].name);
                printf("auteurs:%s\n",p[i].Numero);
                printf("prix:%s\n",p[i].email);
                printf("-------------------------------------------\n");
            }
    
    
}
void Rechercher(){
   {
            
            printf("Rechercher un contact par nom : ");
            scanf("%s", a_Rechercher);
            for(int i=0;i<nombre_contact;i++){
             if(strcmp(a_Rechercher,p[i].name) == 0) {
                printf("|====================================================================|\n");
                printf("Nom :%s\n",p[i].name);
                printf("Numero :%s\n",p[i].Numero);
                printf("email :%s\n",p[i].email);
                printf("|====================================================================|\n");

                tre=1;
                Indice=i;
                }  
             
            }
             if (tre==0){
                printf("Le livre n'est pas contact---------------\n");
            }
            }
    
    
}
int Supprimer(int b){
     for (int i=b;i<nombre_contact;i++){
         
             p[i]=p[i+1];
        
        
     }
    nombre_contact--;
}




int main()
{
  int choix=0;
  
  do {
      print_Menu();
      scanf("%d",&choix);
      switch (choix){
          
          case (1):{

              Ajouter();
              nombre_contact++;
                break;
          }
           case (2):{

              Afficher();
                break;
          }
          case (3):{
              Rechercher();
              
                break;
          }
          case (4):{
                Rechercher();
                if (tre==1){
                 char Modifier[99];
                printf("Entrez un nouveau contact============================\n");
                int tomp=nombre_contact;
                nombre_contact=Indice;
                Ajouter();
                nombre_contact=tomp;
                }
              
                break;
          }
        
          case (5):{
            Rechercher();
            if (tre==1){
                Supprimer(Indice);
                
                }
              
                break;
          }
           case (0):{
                printf("********************** Au revoir **********************");
              
                break;
          }
          
                
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
      }
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
     }while (choix != 0);
  
  
  
  
  
    
   
}
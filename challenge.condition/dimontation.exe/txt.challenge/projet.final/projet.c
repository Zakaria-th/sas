#include <stdio.h>
#include <string.h>
void ajouter();

struct mystruct{
int ide;
char titre[50];
char description[50];
int deadline;
int statut;
};
struct mystruct strc[100];
int note = 1;


int n;
void ajouter(){

    printf("entrer size de tableau:");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
   
   printf("veuillez saisir le titre :");
   scanf(" %29[^\n]",&strc[i].titre);
   printf("veuillez saisir le description :");
   scanf(" %29[^\n]",&strc[i].description);
   printf("veuillez saisir le deadline :");
   scanf("%d",&strc[i].deadline);
   printf("veuillez saisir le statut : ");
   scanf("%d",&strc[i].statut);
   strc[i].ide = note;
   note +=1;

printf("<=======================================>\n");
}
}


void affichage(){
  for(int i=0;i<n;i++){
    printf("=============================\n");
    printf("\n \n==>id : %d\n", strc[i].ide);
    printf("==>titr :%s\n", strc[i].titre);
    printf("==>description :%s\n", strc[i].description);
    printf("==>deadline :%d\n", strc[i].deadline);
    printf("==>statut :%d\n", strc[i].statut);
  }
}
void afichagejour(){

}
void modifier(){
  int chois;
  printf("veuillez saisir le ide: ");
  scanf("%d",&chois);
  for(int i=0;i<n;i++){
    if (chois ==strc[i].ide)
    {
   printf("veuillez saisir la description:");
   scanf(" %29[^\n]",&strc[i].description);
   printf("veuillez saisir le deadline :");
   scanf("%d",&strc[i].deadline);
   printf("veuillez saisir le statut :");
   scanf("%d",&strc[i].statut);
    }
    
  }
}
void rechercher(){
int index;
 int test; 
 char tn[50];
    printf("[1]veuillez saisir le ide :\n");
    printf("[2]veuillez saisir le titre :\n");
    scanf("%d",&index);
  if(index==1){
    printf("veuillez saisir le ide:\n");
    scanf("%d",&test);
for(int i=0;i<n;i++){
  if(test ==strc[i].ide){
  printf("<==description: %s\n" ,strc[i].description);
  printf("<==deadline : %d\n" ,strc[i].deadline);
  printf("<==statut : %d \n" ,strc[i].statut);
  }
}
  }
else if(index==2){
printf("veuillez saisir le titre:\n");
    scanf("%s",&tn);
for(int i=0;i<n;i++){
  if (strcmp(tn,strc[i].titre) ==0){
  printf("<==description: %s\n" ,strc[i].description);
  printf("<==deadline : %d\n" ,strc[i].deadline);
  printf("<==statut : %d \n" ,strc[i].statut);
  }
}
  }
}


void suprimer(){
  int suprimerindex;
  printf("veuillez saisir le suprimer:");
  scanf("%d",&suprimerindex);
  for(int i=suprimerindex-1 ; i<n-1;i++){
    strc[i]=strc[i+1];
    n--;  
    
}
}
void statistiques(){
  printf("le nembre des taches =%d\n", n);

}


void nbrtache(){
int tache =0;
for(int i=0;i<n;i++){
  if(strc[i].statut == 0 || strc[i].statut == 2){
    tache = tache + strc[i].ide;
  }

     printf("%d\n", tache);
}
}




void menu(){
    int b;
do{
printf("<==============================================>\n");
  printf("[1]-ajouter une nouvelle tache :\n");
  printf("[2]-afficher la liste de toutes les taches :\n");
  printf("[3]-modifier une tach :\n");
  printf("[4]-supprimer une tache par identifiant :\n");
  printf("[5]-rechercher les taches :\n");
  printf("[6]-statistiques :\n");
  printf("[7]-queti :\n");

  printf("choix");
  scanf("%d", &b);
printf("<===============================================>\n");



  switch(b){
 case 1:
   ajouter();
   break;
 case 2:
    affichage();
     nbrtache();
   break;
 case 3:
  modifier();
   break;
 case 4:
  suprimer();
  break;
 case 5:
  rechercher();
  break;
 case 6:
  statistiques();
  break;
  }
}while(b != 7);
}

int main(){
    menu();
return 0;
}
#include <stdio.h>


 int main (){
   char nom[20];
   char prenom[20];
   int age;
   char sexe;
   int numero;
   
    printf("entrez votre nom : ");
    scanf("%s", nom);

    printf("entrez votre prenom :");
    scanf("%s" , prenom);

    printf("entrez votre age :");
    scanf("%d" , &age);

   printf("entrez votre sexe :");
   scanf(" %c" , &sexe);

     printf("entrez votre numero de telephone :");
    scanf("%d" , &numero);


   printf("nom : %s\n" , nom);
   printf("prenom : %s\n" , prenom);
   printf("age : %d\n ", age);
   printf("sexe : %c\n ", sexe);
   printf("num : %d\n ", numero);


   return 0;

}
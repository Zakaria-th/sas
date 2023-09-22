#include<stdio.h>

int main(){
int age,num;
char nom[40];
char prenom[50];
char sexe[50];

printf("svp entre votre age:");
scanf("%d",&age);

printf("svp doner votre num:");
scanf("%d",&num);

printf("svp doner votr nom :");
scanf("%s",&nom);

printf("svp doner votre prenom :");
scanf("%s",&prenom);

printf("svp doner votre sexe:");
scanf("%s",&sexe);

printf("%d \n",age);
printf("%d \n",num);
printf("%s \n",nom);
printf("%s \n",prenom);
printf("%c \n",sexe);
return 0;
}
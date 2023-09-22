#include<stdio.h>
int main(){
  int tableau[10];
  int i,j,tmp;
  printf("veuillez saisir les elements du tableau : \n");
for(i=0;i<10;i++){
    printf("tableau[%d]=",i);
    scanf("%d",&tableau[i]);
}
for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
        if(tableau[i]<tableau[j]){
            tmp=tableau[i];
            tableau[i] =tableau[j];
            tableau[j] =tmp;
        }
    }
}
printf("les elements du tableau paar ordre croissant :\n");
for(i=0;i<10;i++)
printf("%d",tableau[i]);

return 0;
}
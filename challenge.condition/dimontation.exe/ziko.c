#include<stdio.h>

void signe ( int a, int b){
if(a*b)
printf("les valeurs de a et b on le meme signe \n");
else 
printf("les valeurs de a et b on des signe differents \n");

}

int minimum ( int a , int b){
int min;
if(a>b)
min = b;
else
min = a;
return min;
}
int maximum (int a , int b){
    int max;
if(a>b)
max= b;
else
max = a;
return max;
}




int main(){

int max , min;
int a , b;
printf("veuillez saisir la valeur de a :");
scanf("%d",&a);
printf("veuillez saisir la valeur de b :");
scanf("%d",&b);
signe (a,b);
min = minimum(a,b);
max = maximum(a,b);
printf("la valeur minimal est : %d\n",min);
printf("la valeur maximal est : %d\n",max);
return 0;
}
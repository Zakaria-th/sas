#include<stdio.h>
#include<math.h>

int somme (int nbr1,int nbr2){
    return nbr1 +nbr2;
}

int socstraction(int nbr1 ,int nbr2){
    return nbr1 - nbr2;
}
float division(float nbr1 ,float nbr2){
    return nbr1/nbr2;
}
int multiplication(int nbr1,int nbr2){
    return nbr1*nbr2;
}
int carre (int nbr1,int nbr2){
    return pow(nbr1,2) + (nbr2,2);
}
float racinecarre(float nbr1,float nbr2){
return sqrt(nbr1)+(nbr2);
}


int main(){

printf("%d", somme(7,5));
printf("%d",socstraction(10,5));
printf("%f",division(15,2));
printf("%d",multiplication(5,5));
printf("%d",carre(5,10));
printf("%f",racinecarre(3,2));
    return 0;
}

#include <stdio.h>
int main(){
    int a, b, c,d , somme, Moyenne;
printf("svp donner quatre nombre a et b et c et d");
scanf("%d %d %d %d",&a, &b, &c,&d );
somme =a+b+c+d;
Moyenne = somme/4;
printf("la somme est :%d\n" , somme);
printf("Moyenne est : %d" , Moyenne);
return 0;
}
#include <stdio.h>
int main() {
    int a , b, somme , less  , multiple , devision;
    printf("svp donner deux nombres a et b :");
    scanf("%d %d" ,&a ,&b );
    somme= a+b;
    less= a-b;
    multiple= a*b;
    devision= a/b;
    printf("la somme est :%d\n" , somme);
    printf("la less est :%d\n" , less);
    printf("la multiple est :%d\n" , multiple);
    printf("la devision est :%d\n" , devision);
    return 0;
}
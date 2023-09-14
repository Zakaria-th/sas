#include <stdio.h>
int main() {
    int nombre, invers;

    printf("enter trois inverses : ");
    scanf("%d", &nombre);

    if (nombre >= 100 && nombre <= 999) {
        
        int inverse1 = nombre / 100;
        int inverse2 = (nombre % 100) / 10;
        int inverse3 = nombre % 10;

        invers = inverse3 * 100 + inverse2 * 10 + inverse1;

        
        printf("nombre inversé est : %d\n", invers);
    } else {
        printf("s'il vous plait entrer un nombre de trois inverses.\n");
    }

    return 0;
}
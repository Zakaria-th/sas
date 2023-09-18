#include<stdio.h>

int main() {
  int tableau[10];
  int max1, max2;
  int i;

  printf("veuillez saisir les elements du tableau: \n");
  for (i = 0; i < 10; i++) {
    printf("tableau[%d] = ", i + 1);
    scanf("%d", & tableau[i]);
  }

  int min1 = tableau[0];
  max2 = tableau[0];
  for (i = 1; i < 10; i++) {
    if (tableau[i] > max2) {
    max2 = tableau[i];
  }

  }
  
 for(int i = 0 ; i < 10 ;i++){
     if (tableau[i] < min1) {
    min1 = tableau[i];
  }
 }
  printf("le premier plus grand element du tableau : %d\n", max2);
  printf("le premier plus petit element du tableau : %d\n", min1);
  return 0;
}
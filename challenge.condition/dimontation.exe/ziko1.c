#include<stdio.h>
void richestpeople(int rank, char name[], float networtch);


int main(){

richestpeople(1,"bill gates",86);
richestpeople(2,"warren buffet",75.6);
richestpeople(3,"jeff bezos",72.6);

return 0;

}

void richestpeople(int rank, char name[], float networtch){

printf("%d\t",&rank);
printf("%s\t",name);
printf("%.1f\n", networtch);


}








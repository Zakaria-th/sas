#include<stdio.h>



int main(){
int t[10];
int i,j,temp;
printf("veuillez saisir les element de tableau:\n");

for(i=0;i<10;i++){
    printf("t[%d]=",i);
    scanf("%d",&t[i]);
}



for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
    if(t[i]<t[j]){
        temp = t[i];
        t[i] = t[j];
        t[j] = temp;
    }
}
}
printf("les element de tableau par ordre croisent :\n");
for(i=0;i<10;i++)
    printf("%d",t[i]);


   return 0;
}
#include<stdio.h>
int main(){

char c;
printf("entren un caractère:\n");
scanf("%c",&c);
if(c =='a' ||c == 'e' || c == 'i' || c == 'o' || c== 'u' || c=='y'||
c=='a' || c == 'e'|| c== 'i' || c=='o'|| c== 'u'|| c=='y'){
    printf("\n %c est une voyelle.",c);
}
    else{
        printf("\n %c est une consonne.",c);
    }
  return 0;

}
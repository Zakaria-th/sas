#include<stdio.h>
#include<math.h>
int main(){
int x1, x2, y1, y2 ,distance;

printf("doner les coordonnée de x1 :");
scanf("%d", &x1 );

printf("doner les coordonnée de x2 :");
scanf("%d", &x2 );

printf("doner les coordonée de y1 :");
scanf("%d", &y1);

printf("doner les coordonée de y2 :");
scanf("%d", &y2);

distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
printf("la distenceb est :%d",distance);
return 0;

}
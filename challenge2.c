#include <stdio.h>

 int main (){

     float Fahrenheit, Celsius;
     

     printf("entrer temperature en  fahrentheit \n");
     scanf("&f",fahrentheit);

     
     Celsius = (Fahrenheit-32)/1.8

     printf("tenmperature en Celsius est : %f\n", Celsius);
     if(Celsius < 0){
        printf("very cold\n")
     } else if (Celsius >= 0  && Celsius < 10){
        printf(" clod\n");
     } else if (Celsius >= 10 && Celsius < 25){
        printf("hot\n");
    
     } else {
        printf("very hot\n");
     }
     return 0;

      
            
        
     
 }

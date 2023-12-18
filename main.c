#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 struct josue 
{
    char nom[200];
     char prenom[200];
     int age;
} ;

typedef struct josue josue;
 void afficher ( josue josue){
 printf("%d\n",josue.age);
  printf("%s\n",josue.nom);
   printf("%s",josue.prenom);
 }
int main(){
 josue josue1;
 josue1.age = 23;
 strcpy(josue1.nom,"boulingui");
 strcpy(josue1.prenom,"josue");

 afficher(josue1);
}
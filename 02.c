#include <stdio.h>
#include <math.h>
int main (){
int somme_donne;
int montant_total;
int bill20,bill10,bill5,bill2,bill1;
int result;
printf("donne la somme que vous avez:");
scanf("%d",&somme_donne);
printf("entre le montant de votre achat:");
scanf("%d",&montant_total);
if (montant_total > somme_donne)
{
    printf("la somme donne est trop petit");
    return-1;
}else if(somme_donne == montant_total){
    printf("vous avez tout depence");
    return 0;
}else{
 result = somme_donne - montant_total;
 bill20 = result /20;
 result %=20;
bill10 = result/10;
result%=10;
bill5 = result/5;
result%=5;
bill2 = result/2;
result%=2;
bill1 = result/1;
result%=1;
printf("\na rendre comme money\n");
if(bill20 >0){
    printf("billet(s) de 20 euros :%d \n",bill20);
}
if(bill10 >0){
    printf("billet(s) de 10 euros :%d \n",bill10);
}if(bill5 >0){
    printf("billet(s) de 5 euros :%d \n",bill5);
}if(bill2 >0){
    printf("billet(s) de 2 euros :%d \n",bill2);
}if(bill1 >0){
    printf("billet(s) de 1 euros :%d \n",bill1);
}
}

return 0;
}
#include <stdio.h>
#include <time.h>
int main(){
    int segond =0;
    printf("segond:");
    scanf("%d",&segond);

    while (segond>0)
    {
        int h= segond/3600;
        int m =(segond% 3600)/60;
        int s=segond %60;
        printf("\r %02d: %02d: %02d",h,m,s);
        fflush(stdout);
       clock_t stop = clock() + CLOCKS_PER_SEC;
     while (clock() <stop){}
   
       segond++;
    }
   printf("\rtime s up\n");
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void make(char *josue);
int main(){
  char josue[323];
  printf("entre ton nom:");
  gets(josue);
   make(josue);
   printf("%s",josue);
   return 0;
}
void make(char *josue){
  int length = strlen(josue);
  for (int i = 0; i < length; i++)
  {
   josue[i] = tolower(josue[i]);
  }
  
}
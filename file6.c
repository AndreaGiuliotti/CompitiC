#include<stdio.h>
int main(){

int voto;
printf("Inserire un voto : ");
scanf("%d",&voto);
(voto>=0) ? printf("Voto positivo \n") : printf("Voto negativo \n");

return 0;

}

#include <stdio.h>
int main(){

	int numeri[10];
	int i;

printf("Inserisci 10 numeri nel vettore:");
	printf("\n");

    for(i = 0; i < 10; i++){
        scanf("%d", &numeri[i]);
    }

printf("Elementi pari dell'array: \n ");

    for(i = 0; i<10; i++){
        if(numeri[i] % 2 == 0){
            printf("| %d | ", numeri[i]);
        }
    }

printf("\n Elementi dispari dell'array: \n");

    for(i = 0; i<10; i++){
        if(numeri[i] % 2 != 0){
            printf("| %d | ", numeri[i]);
        }
    }

	printf("\n");

    return 0;
}
#include <stdio.h>
int main(){

int array[10];

printf("Inserisci 10 numeri nel vettore:");

    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

	printf("Elementi pari dell'array: \n ");

    for(int j = 0; j<10; j++){
        if(array[j] % 2 == 0){
            printf("| %d | ", array[j]);
        }
    }

	printf("\n Elementi dispari dell'array: \n");

    for(int k = 0; k<10; k++){
        if(array[k] % 2 != 0){
            printf("| %d | ", array[k]);
        }
    }

	printf("\n");

    return 0;


}

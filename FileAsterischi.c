#include <stdio.h>
int Main(){

	int numero;
	printf("Inserisci un numero");
	scanf("%d",&numero);

	int i;
	for(i = 0; i<=numero; i++){
		printf("*");}

	printf("\n");

	for(i = 0; i <= numero-2; i++){
	printf("*");
		for(int j =0; j<= numero-2; j++){
		printf(" ");}
	printf("*\n");
	}

	for(i = 0; i<=numero;i++){
	printf("*");
	}

	return 0;

}

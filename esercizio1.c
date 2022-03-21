#include <stdio.h>

int main() {
      
      int scelta;
        printf("Inserire un numero compreso fra 1 e 7: ");
        scanf("%d", &scelta);

        if(scelta == 1){
            printf("Il numero %d corrisponde al giorno LUNEDI' \n", scelta);
        } else if(scelta == 2){
            printf("Il numero %d corrisponde al giorno MARTEDI' \n", scelta);
        } else if(scelta == 3){
            printf("Il numero %d corrisponde al giorno MERCOLEDI' \n", scelta);
        } else if(scelta == 4){
            printf("Il numero %d corrisponde al giorno GIOVEDI' \n", scelta);
        } else if(scelta == 5){
            printf("Il numero %d corrisponde al giorno VENERDI' \n", scelta);
        } else if(scelta == 6){
            printf("Il numero %d corrisponde al giorno SABATO \n", scelta);
        } else if(scelta == 7){
            printf("Il numero %d corrisponde al giorno DOMENICA \n", scelta);
        } else{
            printf("Giorno non valido \n");
        }

        return 0;
      
}

#include <stdio.h>

int main() {

    float costo_biglietto, importo_da_pagare;
    char condizione;


    printf("Inserisci il costo del biglietto: ");
    scanf("%f", &costo_biglietto);


    printf("Inserisci la condizione dell'utente (P per pensionato, S per studente, D per disoccupato, N per nessuna condizione): ");
    scanf(" %c", &condizione);


    if (condizione == 'P') {

        importo_da_pagare = costo_biglietto * 0.90;
    } else if (condizione == 'S' ) {

        importo_da_pagare = costo_biglietto * 0.85;
    } else if (condizione == 'D' ) {

        importo_da_pagare = costo_biglietto * 0.75;
    } else {

        importo_da_pagare = costo_biglietto;
    }


    printf("L'importo da pagare è: %.2f euro\n", importo_da_pagare);

    return 0;
}

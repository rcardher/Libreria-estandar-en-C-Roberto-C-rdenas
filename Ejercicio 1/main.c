#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

int main() {
    // Ejemplo de abs()
    int num = -10;
    int abs_num = abs(num);
    printf("Valor absoluto de %d es %d\n", num, abs_num);

    // Ejemplo de rand()
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        int random_number = rand();
        printf("Número aleatorio: %d\n", random_number);
    }

    return 0;
}


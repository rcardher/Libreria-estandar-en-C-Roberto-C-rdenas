#include "Cadenas.h"

// Implementación de la función para comparar cadenas
void compararCadenas(const char *str1, const char *str2) {
    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
}

// Implementación de la función para calcular la longitud de una cadena
void longitudCadena(const char *str) {
    int length = strlen(str);
    printf("La longitud de '%s' es: %d\n", str, length);
}


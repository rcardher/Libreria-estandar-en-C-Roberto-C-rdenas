#include "archivos.h"

// Implementación de la función para abrir un archivo
void abrirArchivo(const char *nombreArchivo) {
    FILE *file = fopen(nombreArchivo, "r");
    if (file == NULL) {
        printf("El archivo %s no se pudo abrir.\n", nombreArchivo);
        return;
    }

    // Cerrar el archivo al final
    fclose(file);
}

// Implementación de la función para escribir y leer un archivo
void escribirYLeerArchivo(const char *nombreArchivo) {
    FILE *file = fopen(nombreArchivo, "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return;
    }

    fprintf(file, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file);

    // Abrir de nuevo para leer
    file = fopen(nombreArchivo, "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);
}
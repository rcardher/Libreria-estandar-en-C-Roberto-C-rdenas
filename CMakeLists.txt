cmake_minimum_required(VERSION 3.10)
project(Libreria_estandar_en_C_Roberto_C_rdenas C)

set(CMAKE_C_STANDARD 11)

include_directories("Ejercicio 1")
include_directories("Ejercicio 2")

add_executable(Libreria_estandar_en_C_Roberto_C_rdenas
        "Ejercicio 1/main.c"
        "Ejercicio 1/main.h"
        "Ejercicio 2/Cadenas.c"
        "Ejercicio 2/Cadenas.h"
)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar valores
    int energia = 50;
    int hambre = 50;
    char nombre[20];
    char opcion;

    // Pedir nombre del Tamagochi
    printf("Bienvenido al Tamagochi! Por favor, ingrese el nombre de su Tamagochi: ");
    scanf("%s", nombre);
    getchar(); // Consumir el carácter de nueva línea en el búfer

    printf("%s Dice Hola!\n", nombre);


    // Loop principal
    while (1) {
        // Evaluar si el Tamagochi ha muerto
        if (energia <= 0 || hambre <= 0) {
            printf("%s ha muerto! 💀\n", nombre);
            exit(0);
        }
        // Mostrar opciones del menu
        printf("\nMENU:\n");
        printf("(1) Jugar\n");
        printf("(2) Comer\n");
        printf("(3) Dormir\n");
        printf("(4) Ver estado\n");
        printf("(5) Salir\n");
        printf("Seleccione una opcion: ");

        scanf(" %c", &opcion);
            // Evaluar opcion seleccionada
            switch (opcion) {
                case '1':
                    break;
                case '2':
                    break;
                case '3':
                    break;
                case '4':
                    break;
                case '5':
                    // Salir del programa
                    printf("Adios!\n");
                    exit(0);
                default:
                    printf("Opcion invalida.\n");
                    opcion = 0;
                    break;
            }
    }
}
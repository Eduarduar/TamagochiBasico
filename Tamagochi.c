#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jugar(char nombre[], int *energia, int *hambre) {
    int subopcion = 0;
    // Mostrar opciones del submenu Jugar
    printf("\nJUGAR:\n");
    printf("(1) Jugar Futbol\n");
    printf("(2) Jugar VideoJuegos\n");
    printf("(3) No jugar\n");
    printf("Seleccione una opcion: ");
    scanf(" %d", &subopcion);

    // Evaluar subopcion seleccionada
    switch (subopcion) {
        case 1:
            printf("%s Esta jugando Futbol!\n", nombre);
            *energia -= 10;
            *hambre += 5;
            break;
        case 2:
            printf("%s Esta jugando VideoJuegos!\n", nombre);
            *energia -= 5;
            *hambre += 2;
            break;
        case 3:
            printf("%s no quiere jugar.\n", nombre);
            *energia -= 2;
            break;
        default:
            printf("Opcion invalida.\n");
            break;
    }
}

void comer(char nombre[], int *energia, int *hambre) {
    int subopcion = 0;
    // Mostrar opciones del submenu Comer
    printf("\nCOMER:\n");
    printf("(1) Comer Ensalada\n");
    printf("(2) Comer Carne azada\n");
    printf("(3) No comer\n");
    printf("Seleccione una opcion: ");
    scanf(" %d", &subopcion);

    // Evaluar subopcion seleccionada
    switch (subopcion) {
        case 1:
            printf("%s Esta comiendo Ensalada!\n", nombre);
            *energia += 5;
            *hambre -= 10;
            break;
        case 2:
            printf("%s Esta comiendo Carne azada!\n", nombre);
            *energia -= 5;
            *hambre -= 15;
            break;
        case 3:
            printf("%s no quiere comer.\n", nombre);
            *energia -= 2;
            break;
        default:
            printf("Opcion invalida.\n");
            break;
    }
}

void dormir(char nombre[], int *energia, int *hambre) {
    int subopcion = 0;
    // Mostrar opciones del submenu Dormir
    printf("\nDORMIR:\n");
    printf("(1) Dormir un ratito\n");
    printf("(2) Dormir todo el dia\n");
    printf("(3) No dormir\n");
    printf("Seleccione una opcion: ");
    scanf(" %d", &subopcion);

    // Evaluar subopcion seleccionada
    switch (subopcion) {
        case 1:
            printf("%s Durmio un ratito!\n", nombre);
            *energia += 10;
            *hambre += 5;
            break;
        case 2:
            printf("%s Durmio toda el dia!\n", nombre);
            *energia += 20;
            *hambre += 10;
            break;
        case 3:
            printf("%s no quiere dormir.\n", nombre);
            *energia -= 2;
            break;
        default:
            printf("Opcion invalida.\n");
            break;
    }
}

void ver_estado(char nombre[], int energia, int hambre) {
    // Mostrar estado actual del Tamagochi
    printf("\nESTADO:\n");
    printf("Energia = %d\n", energia);
    printf("Hambre = %d\n", hambre);
}

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
            ver_estado(nombre, energia, hambre);
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
                    jugar(nombre, &energia, &hambre);
                    break;
                case '2':
                    comer(nombre, &energia, &hambre);
                    break;
                case '3':
                    dormir(nombre, &energia, &hambre);
                    break;
                case '4':
                    ver_estado(nombre, energia, hambre);
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
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#ifndef _NUMEROASTRONOMICO_H_

#define _NUMEROASTRONOMICO_H_

#define MAXDIGITOS 100 //cantidad maxima de digitos

//Prototipos

//Operaciones de creacion
NumeroAstronomico CrearDesdeCadena(char*);
NumeroAstronomico CrearDesdeCifraSeguidaDeCeros(char*);
NumeroAstronomico CrearAleatorio(char*);

//Operaciones de Manejo de Errores
bool EsSecuenciaNula(NumeroAstronomico);
bool EsSecuenciaInvalida(NumeroAstronomico);
bool EsOverflow(NumeroAstronomico);
//bool EsPunteroNulo
// GetTipoDeError

NumeroAstronomico EsError(bool);


//Operaciones de Salida
//Mostrar

//Operaciones Aritmeticas
NumeroAstronomico Sumar(NumeroAstronomico, NumeroAstronomico);
bool SonIguales(NumeroAstronomico, NumeroAstronomico);
bool esMenor(NumeroAstronomico, NumeroAstronomico);

//De Persistencia

//Binario
//Read
//Write

//arreglar
enum TipoDeError = {Ninguno, CadenaNula, CadenaInvalida, Overflow(, PunteroNulo)};

typedef struct {
    const char* entero;
    int longitudError;
} NumeroAstronomico;


void menu(){

    int respuesta, respuesta2, respuesta3;
    
    printf("Seleccione una opción para proceder: (1,2,3,4)");
    printf("\n**OPERACIONES**");

    do {

    printf("1. Operaciones de Creación");
    printf("\n2. Operaciones Aritmeticas");
    printf("\n3. Salir.");
    
    scanf("%d", &respuesta);


    switch (respuesta){
        case 1: printf("Seleccione entre las siguientes operaciones de creación:");
                printf("\n1. Crear desde cadena.");
                printf("\n2. Crear desde cifra seguida de ceros.");
                printf("\n3. Crear aleatoria.");
                printf("\n4. Volver al menú principal.");

                scanf("%d", &respuesta2);

                switch(respuesta2){

                    case 1: CrearDesdeCadena(cadena);
                        break;
                    case 2: CrearDesdeCifraSeguidaDeCeros(cadena);
                        break;
                    case 3: CrearAleatorio(cadena);
                        break;
                    default:
                        printf("Valor ingresado no válido.");
                        break;
                }

        case 2: printf("Seleccione una operación aritmetica a realizar: (1,2,3,4)");
                printf("1. Sumar 2 Números Astronomicos.");
                printf("2. Verificar si 2 Números Astronomicos son iguales.");
                printf("3. Que Número Astronomico es menor?");
                printf("4. Volver al menú principal.");
                
                scanf("%d", &respuesta2);

                switch (respuesta2)
                {
                case 1:
                    Sumar(cadena1, cadena2);    
                    break;
                case 2: SonIguales(cadena1, cadena2);
                    break;
                case 3: EsMenor(cadena1, cadena2);
                    break;
                case 4: exit(0);
                    break;
                default:
                    printf("Valor ingresado no válido.");
                    break;
                }
        case 3: exit(0);
            break;

        default:
            printf("Valor ingresado no válido");
            break;

        } while (respuesta != 4);
    } 
    
NumeroAstronomico CrearDesdeCadena(char* cadena){

    printf("Escribe una cadena para transformarla");
    scanf();
}

NumeroAstronomico CrearDesdeCifraSeguidaDeCeros(char* numero){//revisar
    int ceros = 0;
    double resultado = 0;

    printf("Escriba el numero que desea pasar a astronomico: ");
    numero =scanf(NumeroAstronomico.entero);
    
    while(ceros < MAXDIGITOS){
    prinft("Indique cantidad de ceros a agregar al numero: ");
    scanf(ceros);
    
    }

    resultado = strcat(numero, ceros);

    return resultado;
}

bool esOverflow(NumeroAstronomico overFlow){


}

NumeroAstronomico Sumar(NumeroAstronomico num1, NumeroAstronomico num2){
   //rehacer con strings
    printf("")
    return num1 + num2;
}

bool SonIguales(NumeroAstronomico num1, NumeroAstronomico num2){
    //rehacer con strings
    if(num1 == num2)
        return true;
    return false;
}

bool esMenor(NumeroAstronomico num1, NumeroAstronomico num2){
    //rehacer con strings
    if (num1 > num2)
        return num2;
    return num1;  
}


#endif

#ifndef P1_1
#define P1_1

#include "lista.h"

#define MAXDATA 4096 //Maximo de elementos de la lista
#define MAX 1024 //Maximo de chars de un string
#define MAXTROZOS 100 //Maximo de palabras que forman un comando de la shell

//Cabeceras de funciones del programa principal y de la P0
void printPrompt();
void readIn(char *cadena, char *trozos[], char *comando);
int trocearCadena(char *cadena, char *trozos[]);
void processIn(char *trozos[], char *comando, tList *L, int *a);
void comAutores(char *trozos[], char *comando);
void comEnd(char *trozos[], char *comando, tList *L, int *a);
void comHist(char *trozos[], tList *L, char *comando);
void comPid(char *trozos[], char *comando);
void comCarpeta(char *trozos[], char *comando);
void comFecha(char *trozos[], char *comando);
void comInfosis(char *trozos[], char *comando);
void comAyuda(char *trozos[], char *comando);
void comComandoN(char *trozos[], char *comando, tList *L, int *a);

#endif
#include <stdlib.h>
#include <stdio.h>
/*
typedef struct Complexo - Máscara de utilização da struct complexo.
*/
typedef struct complexo Complexo;
/*
criarComplexo - Recebe 2 valores, 1 real e o outro imaginário.Realiza a passagem dos valores para um vetor já alocado na memória, e retorna um ponteiro de Complexo.
*/
Complexo *criarComplexo(double r, double i);
/*
somaComplexo - Recebe 2 números complexos, e realiza a soma deles, e retorna um valor em formato de ponteiro de Complexo. 
*/
Complexo *somaComplexo(Complexo *n1, Complexo *n2);
/*
subComplex - Recebe 2 números complexos, e realiza a subtração deles, e retorna um valor em formato de ponteiro de Complexo.
*/
Complexo *subComplexo(Complexo *n1,Complexo*n2);
/*
multComplexo - Recebe 2 números complexos, e realiza a multiplicação deles, e retorna um valor em formato de ponteiro de Complexo.
*/
Complexo *multComplexo(Complexo *n1,Complexo*n2);
/*
divComplexo - Recebe 2 números complexos, e realiza a divisão deles, e retorna um valor em formato de ponteiro de Complexo.
*/
Complexo *divComplexo(Complexo *n1,Complexo*n2);
/*
imprimirComplexo - Recebe um vetor de Complexo, e imprime ele na tela.
*/
void imprimirComplexo(Complexo*res);
/*
liberarComplexo - Libera o vetor alocado da memória.
*/
void liberarComplexo(Complexo *v);
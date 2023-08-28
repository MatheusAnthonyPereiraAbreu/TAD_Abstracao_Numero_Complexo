#include <stdio.h>
#include <stdlib.h>
#include "complex.h"
/*
  Struct complexo - Um pequeno encapsulamento de variáveis que vão ser usadas durante a execução do código, onde vai guardar o valor real e imaginário do núemero.
*/
struct complexo
{
    double real;
    double img;
};
/*
criarComplexo - Recebe 2 valores, 1 real e o outro imaginário.Realiza a passagem dos valores para um vetor já alocado na memória, e retorna um ponteiro de Complexo.
*/
Complexo *criarComplexo(double a, double b)
{
    Complexo *c = (Complexo *)malloc(sizeof(Complexo));

    if (c != NULL)
    {
        c->real = a;
        c->img = b;
    }
    return c;
}
/*
somaComplexo - Recebe 2 números complexos, e realiza a soma deles, e retorna um valor em formato de ponteiro de Complexo. 
*/
Complexo *somaComplexo(Complexo *n1, Complexo *n2)
{
    double a1 = n1->real;
    double a2 = n1->img;
    double b1 = n2->real;
    double b2 = n2->img;
    
    Complexo *res = (Complexo *)malloc(sizeof(Complexo));
    if (res != NULL)
    {
        res->real = a1 + a2;
        res->img = b1 + b2;
    }
    return res;
}
/*
subComplex - Recebe 2 números complexos, e realiza a subtração deles, e retorna um valor em formato de ponteiro de Complexo.
*/
Complexo *subComplexo(Complexo *n1,Complexo *n2)
{
  double a1 = n1->real;
  double a2 = n1->img;
  double b1 = n2->real;
  double b2 = n2->img;
  
  Complexo *res = (Complexo *)malloc(sizeof(Complexo));

    if (res != NULL)
    {
        res->real = a1 - a2;
        res->img = b1 - b2;
    }
    return res;
}
/*
multComplexo - Recebe 2 números complexos, e realiza a multiplicação deles, e retorna um valor em formato de ponteiro de Complexo.
*/
Complexo *multComplexo(Complexo *n1,Complexo *n2)
{
  double a1 = n1->real;
  double a2 = n1->img;
  double b1 = n2->real;
  double b2 = n2->img;

  Complexo *res = (Complexo *)malloc(sizeof(Complexo));
  
    if (res != NULL)
    {
        res->real = (a1 * a2 - b1 * b2);
        res->img = (b1 * a2 + b2 * a1);
    }
    return res;
}
/*
divComplexo - Recebe 2 números complexos, e realiza a divisão deles, e retorna um valor em formato de ponteiro de Complexo.
*/
Complexo *divComplexo(Complexo *n1,Complexo *n2)
{
  double a1 = n1->real;
  double a2 = n1->img;
  double b1 = n2->real;
  double b2 = n2->img;
  
  Complexo *res = (Complexo *)malloc(sizeof(Complexo));

    if (res != NULL)
    {
        res->real = ((a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2));
        res->img = ((b1 * a2 - b2 * a1) / (a2 * a2 + b2 * b2));
    }
    return res;
}
/*
imprimirComplexo - Recebe um vetor de Complexo, e imprime ele na tela.
*/
void imprimirComplexo(Complexo *res)
{
  printf(" %.2lf + %.2lf i \n", res->real,res->img);
}
/*
liberarComplexo - Libera o vetor alocado da memória.
*/
void liberarComplexo(Complexo *v)
{
    free(v);
}

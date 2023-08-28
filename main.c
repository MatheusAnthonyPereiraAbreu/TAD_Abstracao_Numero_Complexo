#include <stdio.h>
#include <stdlib.h>
#include "complex.h" 

int main(void) {
  //Declaração dos dois números que serão implementados no ponteiro de Complexo.
  double real,img;
  //Declaração dos ponteiros para utilizar as funções do "complex.h"
  Complexo *n1,*n2,*resSoma,*resDif,*resMult,*resDiv;
  //Pede para o usuário colocar a parte real do n1.
  printf("Coloque aqui a parte real do n1: \n");
  scanf("%lf",&real);
  //Pede para o usuário colocar a parte imaginária do n1.
  printf("Coloque aqui a parte imaginaria do n1: \n");
  scanf("%lf",&img);
  //Chama a função para criar um número complexo.
  n1=criarComplexo(real,img);
  //Pede para o usuário colocar a parte real do n2.
  printf("Coloque aqui a parte real do n2: \n");
  scanf("%lf",&real);
  //Pede para o usuário colocar a parte imaginária do n2.
  printf("Coloque aqui a parte imaginaria do n2: \n");
  scanf("%lf",&img);
  //Chama a função para criar um número complexo.
  n2=criarComplexo(real,img);
  printf("O resultado da soma dos numeros : ");
  //Chama a função para somar 2 números complexos.
  resSoma=somaComplexo(n1, n2);
  //Chama a função para imprimir o número complexo.
  imprimirComplexo(resSoma);
  printf("O resultado da diferença dos numeros: ");
  //Chama a função para subtrair 2 números complexos.
  resDif=subComplexo(n1,n2);
  //Chama a função para imprimir o número complexo.
  imprimirComplexo(resDif);
  printf("O resultado da multiplicacao dos numeros: ");
  //Chama a função para multiplicar 2 números complexos.
  resMult=multComplexo(n1,n2);
  //Chama a função para imprimir o número complexo.
  imprimirComplexo(resMult);
  printf("O resultado da divisao dos numeros: ");
  //Chama a função para dividir 2 números complexos.
  resDiv=divComplexo(n1,n2);
  //Chama a função para imprimir o número complexo.
  imprimirComplexo(resDiv);
  //Funções para liberar os ponteiros alocados na memória.
  liberarComplexo(n1);
  liberarComplexo(n2);
  liberarComplexo(resSoma);
  liberarComplexo(resDif);
  liberarComplexo(resMult);
  liberarComplexo(resDiv);

  return 0;
}
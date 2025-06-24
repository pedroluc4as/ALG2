/*2) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um
programa que mostre o tamanho em byte dessa estrutura.*/
#include<stdio.h>
#include<stdlib.h>

struct aluno{
  int matricula;
  char nome[100];
  int p1;
  int p2;
  int p3;
};

int main(){
  printf("Tamanho em bytes da Struct Aluno --> %lu",sizeof(struct aluno));
  return 0;
}
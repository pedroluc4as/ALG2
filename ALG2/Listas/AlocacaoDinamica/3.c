/*3 Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o
endereço de uma pessoa. 
Agora, escreva uma função que receba um inteiro positivo N e retorne 
o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura.
Solicite também que o usuário digite os dados desse vetor dentro da função.*/
#include<stdio.h>
#include<stdlib.h>

struct Cadastro {
  char nome[100];
  int idade;
  char endereco[250];
};

int main(){
  int N = 0;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d",&N);

  if(N < 0){
    printf("Digite um numero válido");
  }

return 0;
}
#include <stdio.h>
#include <string.h>

int main(void) {
  //Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.
  char nome[20];
  char senha[20];
  
  printf("\nNome: ");
  scanf("%s", nome);
  printf("\nSenha: ");
  scanf("%s", senha);
  
  while (strcmp (nome, senha)==0){
    printf("\nA senha precisa ser diferente de nome.");
    printf("\nNome: ");
    scanf("%s", nome);
    printf("\nSenha: ");
    scanf("%s", senha);
  }
    
printf("\nCadastro realizado com sucesso.");
  
}
/***********************************************************************************
9. Solicite ao usuário que digite seu nome e último sobrenome (variáveis separadas).
   Crie uma string cujo conteúdo é o nome completo do usuário.
***********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
  setlocale(LC_ALL,"");

  char nome[10];
  char sobrenome[10];
  char completo[20]; //variavel que armazenará o nome e o sobrenome
  int i=0;
  int j=0; //indice que percorrerá a variável "completo"


  printf("Digite seu nome: ");
  scanf ("%s",nome);

  printf("Agora digite seu último sobrenome: ");
  scanf ("%s",sobrenome);


  while(nome[i]!='\0') //atribuindo o nome a variável "completo"
   {
    completo[j++]=nome[i++];
   }

   completo[j++]=' '; //adicionando o espaço

   i=0;
  while(sobrenome[i]!='\0') //atribuindo o sobrenome a variável "completo"
   {
    completo[j++]=sobrenome[i++];
   }

  completo[j]='\0'; //atribuindo a marcação de fim a variável "completo"


  printf("Seja bem vindo(a) %s. \n\n",completo);

  system("pause");

}



/***********************************************************************************
9. Solicite ao usu�rio que digite seu nome e �ltimo sobrenome (vari�veis separadas).
   Crie uma string cujo conte�do � o nome completo do usu�rio.
***********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
  setlocale(LC_ALL,"");

  char nome[10];
  char sobrenome[10];
  char completo[20]; //variavel que armazenar� o nome e o sobrenome
  int i=0;
  int j=0; //indice que percorrer� a vari�vel "completo"


  printf("Digite seu nome: ");
  scanf ("%s",nome);

  printf("Agora digite seu �ltimo sobrenome: ");
  scanf ("%s",sobrenome);


  while(nome[i]!='\0') //atribuindo o nome a vari�vel "completo"
   {
    completo[j++]=nome[i++];
   }

   completo[j++]=' '; //adicionando o espa�o

   i=0;
  while(sobrenome[i]!='\0') //atribuindo o sobrenome a vari�vel "completo"
   {
    completo[j++]=sobrenome[i++];
   }

  completo[j]='\0'; //atribuindo a marca��o de fim a vari�vel "completo"


  printf("Seja bem vindo(a) %s. \n\n",completo);

  system("pause");

}



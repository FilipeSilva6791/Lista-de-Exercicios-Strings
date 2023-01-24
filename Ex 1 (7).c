/******************************************************************************************
1. Solicite que o usuário digite uma palavra. Exiba o número de caracteres que esta palavra
   contém e exiba a palavra na ordem contrária (de trás para frente). Faça esta tarefa sem
   utilizar as funções da biblioteca string.h.
******************************************************************************************/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int qtdCaracteres (char string []);

int main ()
{
 setlocale(LC_ALL,"");

 char palavra[20]; // variavel para armazenar a palavra digitada
 int caracteres; // variavel para armazenar a qtd de caracteres da palavra

 printf("Digite uma palavra: ");
 scanf("%s", palavra);

 caracteres= qtdCaracteres(palavra);
 printf("Esta palavra contém %d caracteres.",caracteres);

 printf("\nPalavra escrita ao contrário:");

 int i;
 for (i=caracteres; i>=0; i--)
    printf("%c", palavra[i]);

 printf("\n\n");

 system ("pause");
}

int qtdCaracteres (char string[])
{
  int quantidade=0;

  while(string[quantidade] != '\0')
  {
    quantidade ++;
  }

  return quantidade;
}

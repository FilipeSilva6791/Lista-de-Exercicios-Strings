/******************************************************************************************
1. Solicite que o usu�rio digite uma palavra. Exiba o n�mero de caracteres que esta palavra
   cont�m e exiba a palavra na ordem contr�ria (de tr�s para frente). Fa�a esta tarefa sem
   utilizar as fun��es da biblioteca string.h.
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
 printf("Esta palavra cont�m %d caracteres.",caracteres);

 printf("\nPalavra escrita ao contr�rio:");

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

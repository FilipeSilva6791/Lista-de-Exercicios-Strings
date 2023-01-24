/*******************************************************************
7. Faça um programa em C que leia uma palavra pelo teclado e faça a
   impressão conforme o exemplo a seguir para a palavra OLA.
   O
   OL
   OLA
*******************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
  char palavra [15];
  int i;
  int j=0;

  printf("Digite uma palavra: ");
  scanf("%s",palavra);

  while(palavra[i] != '\0')       //delimita o ciclo ate o fim da palavra
  {
     i=0;                         //zera o i a cada novo ciclo

     while (i<j)                  // cria um outro ciclo e delimita ate onde o programa ira exibir a palavra  em cada ciclo
     {
       printf("%c",palavra[i]);
       i++;
     }

     printf("\n");

     j++;
  }

 printf("\n");
 system("pause");
}

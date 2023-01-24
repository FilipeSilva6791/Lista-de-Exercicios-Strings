/***********************************************************************************
3. Solicite ao usuário uma palavra.Exiba esta palavra com todas as letras maiúsculas.
***********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main ()
{
  setlocale(LC_ALL,"");

  char palavra [20];
  int i=0 ;

  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  printf("\nExibindo a palavra com todas as letras em maiusculo: \n");

  while (palavra[i] != '\0')
  {
    if ( palavra[i]>90)
      palavra[i]-=32;//distancia da tabela ASCII entre um caractere minusculo e maiusculo

    printf("%c",palavra[i]);

    i++;
  }

  printf("\n\n");
  system("pause");
}

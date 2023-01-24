/******************************************************************
6. Solicite que o usuário escreva uma frase e escolha um caractere.
Exiba o número de ocorrências do caractere na frase.
******************************************************************/

#include<stdio.h>
#include<stdlib.h>

char receberFrases(char string []);

int main ()
{
  char frase [100];
  char caractere; //armazena o caracter escolhido
  int qtd =0; //quantidade de vezes que o caractere apareceu
  int i;

  printf("Digite uma frase: ");
  receberFrases(frase);

  printf("Escolha um caractere: ");
  scanf("%c",&caractere);

  i=0;

  while (frase[i] != '\0')
    {
      if (frase[i]==caractere)
        qtd++;

      i++;
    }

  printf("O caractere '%c' aparece %d vezes na frase digitada.\n\n",caractere,qtd);

  system("pause");

}

char receberFrases (char string [])
{
 int i=0;
 char caractere; //variavel que armazena os caracteres da função getchar

 do{
   //função getchar: responsável de realizar a entrada dos caracteres (apenas um por vez)
   caractere = getchar();
   string[i] = caractere; //passando os caracteres recebidos para a string
   i++;

 }while(caractere != '\n');   //'\n'= enter

  string[i-1]='\0';  //trocando o caractere da tecla enter pelo caracter nulo do fim da string
}


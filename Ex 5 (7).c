/***********************************************************************
5. Solicite que o usu�rio escreva uma frase. Exiba o n�mero de palavras
   que esta frase cont�m.
***********************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char receberFrases (char string []);

int main ()
{
  setlocale(LC_ALL,"");

  char frase [100];
  int qtdPalavras = 0;
  int i;

  printf("Digite uma frase: ");
  receberFrases(frase);

  i=0;

  while (frase[i] != '\0')
    {
      //a cada espaco ou enter o computador conta como uma palavra
      if(frase[i]==' ' || frase[i]=='\n')
        qtdPalavras++;

      //condi��o que "arruma" caso o usuario digite um espa�o no fim seguido de enter
      if(frase[i]==' ' && frase[i+1]=='\n')
        qtdPalavras--;

      //condi��o que "arruma" caso o usu�rio digite dois espa�os entre duas palavras
      if(frase[i]==' ' && frase[i+1]==' ')
        qtdPalavras--;

      i++;
    }

  printf("\nEsta frase contem %d palavra(s).\n\n",qtdPalavras);

  system("pause");

}

char receberFrases (char string [])
{
 int i=0;
 char caractere; //variavel que armazena os caracteres da fun��o getchar

 do{
   //fun��o getchar: respons�vel de realizar a entrada dos caracteres (apenas um por vez)
   caractere = getchar();
   string[i] = caractere; //passando os caracteres recebidos para a string
   i++;

 }while(caractere != '\n');   //'\n'= enter

}


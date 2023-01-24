/**********************************************************************************
2. Solicite uma frase. Exiba a frase digitada, com cada palavra ocupando uma linha.
**********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char receberFrases (char string []);

int main ()
{
  setlocale(LC_ALL,"");

  char frase [100];
  int i;

  printf("Digite uma frase: ");
  receberFrases(frase);

  printf("\nSeparando as palavras por linha: \n");

  i=0;

  while(frase[i] != '\0')
  {
    printf("%c",frase[i]);

    if(frase[i]==' ')//caractere 'espaço'
      printf("\n");

    i++;
  }
  printf("\n");
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

/***********************************************************************************
8. Solicite que o usu�rio escreva uma frase, escolha um caractere para busca e um
   caractere para substitui��o. Realize a substitui��o escolhida. Exiba o resultado.
***********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char receberFrases(char string []);

int main ()
{
  setlocale(LC_ALL,"");

  char frase [100];
  char busca;
  char substituicao;
  int i;

  printf("Digite uma frase: ");
  receberFrases(frase);

  printf("Escolha um caractere presente na frase para ser substitu�do por outro: ");
  scanf(" %c",&busca);

  printf("Agora escolha um caractere para substitu�-lo: ");
  scanf(" %c",&substituicao);

  i=0;

  while (frase[i] != '\0')
    {
     if (frase[i]==busca)
        frase[i]=substituicao;

     i++;
    }

  printf("Resultado: %s \n\n",frase);
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

  string[i-1]='\0';  //trocando o caractere da tecla enter pelo caracter nulo do fim da string
}


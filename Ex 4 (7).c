/******************************************************************************************
4. Solicite ao usu�rio uma palavra. Exiba esta palavra com a primeira letra mai�scula e as
   demais letras min�sculas.
******************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main ()
{
  setlocale(LC_ALL,"");

  char palavra [20];
  int i;

  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  if(palavra[0]>90) //transformando o primeiro caractere em maiusculo caso ele seja minusculo
    palavra[0]-=32;

  i=1; // segundo caractere

  while(palavra[i] != '\0')
  {
     if(palavra[i]<97)
        palavra[i]+=32;

      i++;
  }

  printf("\n%s \n\n",palavra);

  system("pause");

}

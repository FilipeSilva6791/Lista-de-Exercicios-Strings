/**************************************************************************************
  10. Solicite ao usuário que digite seu nome e último sobrenome (uma variável).
      Separe a variável em duas, garantindo que a primeira letra é maiúscula e
      as demais são minúsculas. Exiba o resultado.
 *************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>

 char receberNome (char string[]);

 int main ()
 {
   setlocale(LC_ALL,"");

   char completo[20];
   char nome [10];
   char sobrenome[10];
   int i=0; //uso geral
   int j=0; //indice da variavel "completo"

   printf("Digite seu nome e ultimo sobrenome: ");
   receberNome(completo);

/************************************************************************************************/
//! TRABALHANDO COM A VARIAVEL NOME


   while(completo[j] != ' ') //passa os caracteres para variavel nome até chegar no caractere espaço
   {
      nome [i]= completo[j];

      i++;
      j++;
   }

   nome[i]='\0'; //adiciona o marcador de fim a variavel nome

   if (nome[0]>90) //se a inicial não for maiuscula, trasforma para maiusculo
      nome[0]-=32;

   i=1; //segundo caractere

   while(nome[i] != '\0')
   {
      if(nome[i]<97) //se o resto nao for minusculo, transforma para minusculo
        nome[i]+=32;

      i++;
   }

/***********************************************************************************************/
//!TRABALHANDO COM A VARIAVEL SOBRENOME

   //como o indice 'j' não foi zerado ele ontinua a copiar de onde parou

   i=0;
   j++; //pulando o espaco

   while(completo[j]!= '\0') // copia o resto para variavel "sobrenome" até o marcadoor de fim
   {
     sobrenome[i]=completo[j];
     i++;
     j++;
   }

   sobrenome[i]='\0'; //adiciona o marcador de fim a variavel sobrenome

   if (sobrenome[0]>90) //se a inicial não for maiuscula, trasforma para maiusculo
      sobrenome[0]-=32;

   i=1; //segundo caractere

   while(sobrenome[i] != '\0')
   {
      if(sobrenome[i]<97) //se o resto nao for minusculo, transforma para minusculo
        sobrenome[i]+=32;

      i++;
   }

/*********************************************************************************************/

   printf("\nResultado:\nVariável 'nome': %s\nVariável 'sobrenome': %s \n\n", nome, sobrenome);

   system("pause");

 }

 char receberNome (char string [])
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


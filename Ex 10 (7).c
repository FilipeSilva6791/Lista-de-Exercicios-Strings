/**************************************************************************************
  10. Solicite ao usu�rio que digite seu nome e �ltimo sobrenome (uma vari�vel).
      Separe a vari�vel em duas, garantindo que a primeira letra � mai�scula e
      as demais s�o min�sculas. Exiba o resultado.
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


   while(completo[j] != ' ') //passa os caracteres para variavel nome at� chegar no caractere espa�o
   {
      nome [i]= completo[j];

      i++;
      j++;
   }

   nome[i]='\0'; //adiciona o marcador de fim a variavel nome

   if (nome[0]>90) //se a inicial n�o for maiuscula, trasforma para maiusculo
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

   //como o indice 'j' n�o foi zerado ele ontinua a copiar de onde parou

   i=0;
   j++; //pulando o espaco

   while(completo[j]!= '\0') // copia o resto para variavel "sobrenome" at� o marcadoor de fim
   {
     sobrenome[i]=completo[j];
     i++;
     j++;
   }

   sobrenome[i]='\0'; //adiciona o marcador de fim a variavel sobrenome

   if (sobrenome[0]>90) //se a inicial n�o for maiuscula, trasforma para maiusculo
      sobrenome[0]-=32;

   i=1; //segundo caractere

   while(sobrenome[i] != '\0')
   {
      if(sobrenome[i]<97) //se o resto nao for minusculo, transforma para minusculo
        sobrenome[i]+=32;

      i++;
   }

/*********************************************************************************************/

   printf("\nResultado:\nVari�vel 'nome': %s\nVari�vel 'sobrenome': %s \n\n", nome, sobrenome);

   system("pause");

 }

 char receberNome (char string [])
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


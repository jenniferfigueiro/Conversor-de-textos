#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define TAM 1000

void converteMaiuscula (char Texto[]) {
  int i;
  for(i=0;i<strlen(Texto);i++)
  	Texto[i] = toupper(Texto[i]);
}

void converteMinuscula (char Texto[]) {
  int i;
  for(i=0;i<strlen(Texto);i++)
  	Texto[i] = tolower(Texto[i]);
}

int main () {
  char Texto[TAM];
  int Escolha;

  printf("Insira seu texto:");
  gets(Texto);
  printf("\nEscolha a forma de conversao:\n1 - Minuscula para maiuscula\n2 - Maiuscula para minuscula\n\n\n");
  scanf("%i", &Escolha);
  if(Escolha == 1)
    converteMaiuscula(Texto);
  else if(Escolha == 2)
   	converteMinuscula(Texto);

  printf("%s", Texto);
  return 0;
}

  

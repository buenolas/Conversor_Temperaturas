#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main(){
 setlocale(LC_ALL, "Portuguese");
 float valor, valor2, resultado;
 char unidade1;

 printf("==========CONVERSOR DE TEMPERATURA==========\n");

 printf("Qual a temperatura que deseja converter? ");
 scanf("%f", &valor);
 setbuf(stdin, NULL);

 printf("Qual a unidade a ser convertida(fahrenheit, kelvin)? ");
 scanf("%c", &unidade1);
 setbuf(stdin, NULL);

 if(unidade1 == 'f'){
    valor2 = valor - 32 ;
    resultado = valor2 * 0.55555556 ;
 }
 else if(unidade1 == 'k'){
    resultado = valor - 273.15 ;
 }
 else{
    printf("\nUnidade inválida!\n");
 }

 printf("\nO resultado é %f graus Celsius\n", resultado);

    system("pause");
    return 0;
}
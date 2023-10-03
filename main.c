#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char operador;
	double num1, num2;
	
	printf ("Qual operação voce quer fazer (+, -, *, /): ");
	scanf ("%c", &operador);
		
	switch (operador){
		case '+':
			
			printf ("Digite um numero: ");
	        scanf ("%lf", &num1);
	
	        printf ("Digite outro numero: ");
	        scanf ("%lf", &num2);
	        
			printf ("A soma do numero %2.lf e do numero %2.lf é igual a %2.lf", num1, num2, num1+num2);
			
		break;
		
		case '-':
			
			printf ("Digite um numero: ");
	        scanf ("%lf", &num1);
	
	        printf ("Digite outro numero: ");
	        scanf ("%lf", &num2);
	        
			printf ("A subtracao do numero %2.lf pelo numero %2.lf é igual a %2.lf", num1, num2, num1-num2);
			
		break;
		
		case '*':
			printf ("Digite um numero: ");
	        scanf ("%lf", &num1);
	
	        printf ("Digite outro numero: ");
	        scanf ("%lf", &num2);
	        
			printf ("A multiplicacao do numero %2.lf pelo numero %2.lf é igual a %2.lf", num1, num2, num1*num2);
		break;
		
		case '/':
			
			printf ("Digite um numero: ");
	        scanf ("%lf", &num1);
	
	        printf ("Digite um numero: ");
	        scanf ("%lf", &num2);
	        
			printf ("A divisao do numero %2.lf pelo numero %2.lf e igual a %2.lf", num1, num2, num1/num2);
			
		break;
		
		default:
			printf ("Escolha um operador dos quatro indicados!");
	}
	
	return 0;
}

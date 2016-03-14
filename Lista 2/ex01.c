#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float saldo;
	
	printf("-------------------Bem Vindo!-------------------\n\n");
	printf("Para consulta de credito insira seu saldo medio:");
	scanf("%f", &saldo);
	getchar();
	printf("\n");
	if (saldo<=200) printf("Para o saldo medio R$%.2f nenhum credito e disponibilizado.\n\n", saldo);
	
	else if (saldo<=400) printf("Para o saldo medio R$%.2f  sao disponibilizados R$%.2f de credito.\n\n", saldo, 0.2*saldo);
	
	else if (saldo<=600) printf("Para o saldo medio R$%.2f sao disponibilizados R$%.2f de credito.\n\n", saldo, 0.3*saldo);
	
	else if (saldo>600) printf("Para o saldo medio R$%.2f sao disponibilizados R$%.2f de credito.\n\n", saldo,0.4*saldo);
	
	printf("-----------Obrigado por nos consultar!-----------\n\n");
	
	system("PAUSE");
	
	
	return 0;

}

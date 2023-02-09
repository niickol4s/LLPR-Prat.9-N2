#include <stdio.h>
#include <locale.h>

int fatorial(int n);

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int number;
	int result;
	
	printf("\nPr�tica 9 - Fatorial com recursividade\n");
	
	printf("\nInsira o valor: ");
	scanf("%d", &number);
	
	result = fatorial(number);
	
	if(result == -1) printf("\nEntrada inv�lida");
		else printf("\nFatorial: %d", fatorial(number));
	
	return 0;
}

/*
	Calcular fatorial
	Entrada: inteiro n
	Sa�da: fatorial de n, se n > 0 ou -1 se n < 0
*/

int fatorial(int n) {
	if(n == 0) return 1;
	
	if(n > 0) return n * fatorial(n - 1);
	
	return -1;
}

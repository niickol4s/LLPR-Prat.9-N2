#include <stdio.h>
#include <locale.h>

int fibonacci(int n);

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int number;
	
	printf("\nPrática 9 - Fibonacci com recursividade\n");
	
	printf("\nInsira o valor: ");
	scanf("%d", &number);
	
	printf("\n%d", fibonacci(number));
	
	return 0;
}

int fibonacci(int n) {
	if(n <= 2) return 1;
	
	if(n > 2) return fibonacci(n - 1) + fibonacci(n - 2);
}

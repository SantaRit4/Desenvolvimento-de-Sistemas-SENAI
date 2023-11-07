#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese_brazil");
	float diagonal, lado;
	printf("declare o valor da diagonal do quadrado");
	scanf("%f", &diagonal);
	lado= diagonal/2;
	
	printf("A área do quadrado do sayajin equivale a %f", lado*lado);
	}

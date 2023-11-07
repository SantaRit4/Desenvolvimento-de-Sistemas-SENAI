#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese_brazil");
	float altura, base;
	printf("digite o valor da altura");
	scanf("%f", &altura);
	
	printf("digite o valor da base");
	scanf("%f", &base);
	printf("o valor da area equivale a %f ", ((base*altura) /2));
	
	}


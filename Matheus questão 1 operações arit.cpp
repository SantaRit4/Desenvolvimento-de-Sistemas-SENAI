#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese_brazil");
	float altura, largura;
	printf("descreva a altura de Namekusei");
	scanf("%f", &altura);
	
	printf("escreva a largura de Namekusei");
	scanf("%f", &largura);
	
	printf("a �rea de Namekusei � %.0f",altura*largura);
}

#include <stdio.h>
#include <locale.h>
#define PI 3,14159265358979323846
int main (){
	setlocale(LC_ALL, "portuguese_brazil");
	
	 float diametro, raio;
	printf("escreva o valor do diametro");
	scanf("%f", &diametro);
	raio = diametro /2;
	printf("o valor do diâmetro é igual a %f", (PI*(raio*raio)));}

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese_brazil");
	float aresta;
	printf("Diga o valor da aresta do guerreiro");
	scanf("%f", &aresta);
	
	printf("o valor do ki do guerreiro sayajin é de %f " ,aresta*aresta);
	
}

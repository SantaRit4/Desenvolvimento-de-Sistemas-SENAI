#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float areaEsf, Dian;
	printf("declare o valor de diâmetro da esfera");
	scanf("%f", &Dian);
	float raio= Dian/2;
	areaEsf= 4*3.14159265359*raio*raio;
	
	printf("O valor da área é de  %f", areaEsf);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float esferaDia, Raio, Volume;
	printf("diga o valor do diâmetro da esfera");
	scanf("%f", &esferaDia);
	
	 Raio= esferaDia/2;	
	 Volume= (1.3333333*PI)*(Raio*Raio*Raio);
	 
	 printf("O volume da esfera é  %5f ", Volume);
	
	
	return 0;
}

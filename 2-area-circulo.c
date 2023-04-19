#include <stdio.h>
#include <stdlib.h>

int main(){
	float raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area = 3.14159 * raio * raio;
	
	printf("A area do circulo e: %f\n", area);
	
	system("pause");
}

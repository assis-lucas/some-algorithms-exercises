#include <stdio.h>
#include <stdlib.h>

main()
{
	float valor, x, r;
	char NomeCliente[50];
	printf("Coloque o Nome:");
	scanf("%s", &NomeCliente);
	printf("Digite o Valor:");
	scanf("%f", &valor);
    
	if (valor<1000){
	r= valor * 0.10;
	printf("Resultado: %f", r);
	} else {
	r = valor * 0.15;
	printf("Resultado: %f", r);
	}	
}

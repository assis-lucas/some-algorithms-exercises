#include <stdio.h>
#include <stdlib.h>

main()
{
    float valorav, valorpz, valor, x, tvalorvendas, parcvalorpz;
	int cod;

	for (x=0; x<=3; x=x+1){
	valor=0;
	printf("Digite o codigo da venda (1 a vista ou 2 a prazo): ");
	scanf("%d", &cod);
	
    switch (cod){
			case 1:
				printf("Digite o valor do produto: ");
				scanf("%f", &valor);
				valorav = valorav + valor;
			break;
			
			case 2:
				printf("Digite o valor do produto: ");
				scanf("%f", &valor);
				valorpz = valorpz + valor;
			break;
        	default:
                printf("Pagamento Invalido\n"); 	 
     	}
			tvalorvendas = valorav + valorpz;
	     	parcvalorpz = valorpz / 3;
   }
	printf("Total de vendas a vista: %.2f\n", valorav);
	printf("Total de vendas a prazo: %.2f\n", valorpz);
	printf("Total de vendas (a vista + a prazo): %.2f\n", tvalorvendas);
	printf("Valor da primeira parcela de vendas a prazo: %.2f", parcvalorpz);
}

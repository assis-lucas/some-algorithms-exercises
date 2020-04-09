#include <stdio.h>
#include <stdlib.h>

main()
{
	float valor_av, valor_pz, valor, x, tvalor_vendas, parcvalor_pz;
	int cod;
	
	for(x=0; x<=3; x=x+1){
		valor = 0;
		printf("Digite o codigo da venda (1 a vista ou 2 a prazo): ");
		scanf("%d", &cod);
		
		switch (cod){
			case 1:
				printf("Digite o valor do produto: ");
				scanf("%f", &valor);
				valor_av = valor_av + valor;
			break;
			
			case 2:
				printf("Digite o valor do produto: ");
				scanf("%f", &valor);
				valor_pz = valor_pz + valor;
			break;
			
			default:
				printf("Forma de pagamento invalido!!!\n\n");
			break;
		}

		tvalor_vendas = valor_av + valor_pz;
		parcvalor_pz = valor_pz / 3;
	}
	//system("cls");
	printf("\n\nTotal de vendas a vista: %.2f\n", valor_av);
	printf("Total de vendas a prazo: %.2f\n", valor_pz);
	printf("Total de vendas (a vista + a prazo): %.2f\n", tvalor_vendas);
	printf("Valor da primeira parcela de vendas a prazo: %.2f", parcvalor_pz);
	
}

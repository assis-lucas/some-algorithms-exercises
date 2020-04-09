#include <stdio.h>
#include <stdlib.h>

main()
{
	float valor, x, r;
	char nome[50];
	
	for(x=0; x<=14; x=x+1){
		printf("Digite o nome: ");
		scanf("%s", &nome);
		
		printf("Digite o valor: ");
		scanf("%f", &valor);
		
		if(valor <= 1000){
			r = valor * 0.10;
		}else{
			r = valor * 0.15;
		}
		printf("Valor do Bonus: %.2f\n", r);
		system("pause");
		system("cls");
	}
}

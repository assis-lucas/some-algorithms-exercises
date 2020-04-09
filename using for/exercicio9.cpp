#include <stdio.h>
#include <stdlib.h>

main()
{
	float idade, idade_h, idade_m, x, idade_med_g, idade_med_h, idade_med_m, total_idade;
	char sexo;
	
	for(x=0; x <=9; x=x+1){
		printf("Digite a idade: ");
		scanf("%f", &idade);
		printf("Digite o sexo: ");
		scanf("%s", &sexo);
		
		idade_med_g = idade_med_g + idade;
		
		switch (sexo){
			
			case 'h':
				idade_h = idade_h + idade;
			break;
			
			case 'm':
				idade_m = idade_m + idade;
			break;
		}
	}
	total_idade = idade_med_g / 10;
	idade_med_h = idade_h / 10;
	idade_med_m = idade_m / 10;
	
	printf("Idade media do grupo: %.0f\n", total_idade);
	printf("Idade media das mulheres: %.0f\n", idade_med_m);
	printf("Idade media dos homens: %.0f\n", idade_med_h);
}

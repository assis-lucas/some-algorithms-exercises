#include <stdio.h>
#include <stdlib.h>

main()
{
	float idade, idadeh, idadem, x, idademedg, idademedh, idademedm, totalidade;
	char sexo;
	
	for(x=0; x <=9; x=x+1){
		printf("Digite a idade:");
		scanf("%f", &idade);
		printf("Digite o sexo:");
		scanf("%s", &sexo);
		
		idademedg = idademedg + idade;
		
		switch (sexo){
			
			case 'h':
				idadeh = idadeh + idade;
			break;
			
			case 'm':
				idadem = idadem + idade;
			break;
		}
	}
	totalidade = idademedg / 10;
	idademedh = idadeh / 10;
	idademedm = idadem / 10;
	
	printf("Idade media do grupo: %.0f\n", totalidade);
	printf("Idade media das mulheres: %.0f\n", idademedm);
	printf("Idade media dos homens: %.0f\n", idademedh);
}

#include <stdio.h>
#include <stdlib.h>

main()
{
	float idade, x, r;
	
	for(x=0; x<=10; x=x+1){
		printf("Digite a idade: ");
		scanf("%f", &idade);
		
		if(idade >= 18){
			r=r+1;
		}
	}
	
	printf("Quantidade de pessoas menores de idade: %.0f\n", r);
}

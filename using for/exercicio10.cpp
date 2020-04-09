#include <stdio.h>
#include <stdlib.h>

main()
{
	float idade, x, media_i, totalm;
	
	for(x=1; ;x++){
		printf("Digite a idade: ");
		scanf("%f", &idade);

		if(idade >= 1 && idade <= 200){
			media_i = media_i + idade;
		}else if(idade == 0){
			printf("PROGRAMA FINALIZADO!!!");
			exit (0);
		}
		
		totalm = media_i / x;
		printf("Media das idades %.0f\n\n", totalm);
		
	}
	
}

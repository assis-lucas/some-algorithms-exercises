#include <stdio.h>
#include <stdlib.h>

main()
{
	float idade, x, r1, r2, r3, r4, r5, result_porc1, result_porc2;
	
	for(x=0; x<=14; x=x+1){
		printf("Digite a idade: ");
		scanf("%f", &idade);
		
		if(idade <= 15){
			r1 = r1 + 1;
		}else if(idade >= 16 && idade <= 30){
			r2 = r2 + 1;
		}else if(idade >= 31 && idade <= 45){
			r3 = r3 + 1;
		}else if(idade >= 46 && idade <= 60){
			r4 = r4 + 1;
		}else if(idade >= 60){
			r5 = r5 + 1;
		}
	}
		result_porc1 = (r1 / 15) * 100;
		result_porc2 = (r5 / 15) * 100;
		
		printf("Qntd de pessoas da primeira faixa etaria: %.0f\n", r1);
		printf("Qntd de pessoas da segunda faixa etaria: %.0f\n", r2);
		printf("Qntd de pessoas da terceira faixa etaria: %.0f\n", r3);
		printf("Qntd de pessoas da quarta faixa etaria: %.0f\n", r4);
		printf("Qntd de pessoas da quinta faixa etaria: %.0f\n", r5);
		
		printf("Porcentagem de pessoas da primeira faixa etaria: %.0f %\n", result_porc1);
		printf("Porcentagem de pessoas da ultima faixa etaria: %.0f %\n", result_porc2);

}

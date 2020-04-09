#include <stdio.h>
#include <stdlib.h>

main()
{
   	float idade, altura, peso, x, qtidade, qtaltura, porcp, rporcp, rqntd, conta;
	for (x=0; x<=2; x=x+1){
	printf("Digite a Idade:");
	scanf("%f", &idade);
	printf("Digite a Altura:");
	scanf("%f", &altura);
	printf("Digite o Peso:");
	scanf("%f", &peso);
	
		if(idade > 50){
			qtidade = qtidade + 1;
		}else if(idade >= 10 && idade <= 20){
			qtaltura = qtaltura + altura;
		}else if(peso < 40){
			porcp = porcp + 1;
		}
	}
	
	rqntd = qtaltura / qtidade;
	rporcp = (porcp / 25) * 100;
	
	printf("Pessoas com mais de 50 anos: %.0f\n", qtidade);
	printf("Media de Altura de pessoas entre 10 e 20 anos: %.2f\n", rqntd);
	printf("Pessoas com menos de 40kgs: %.0f\n", rporcp);
}

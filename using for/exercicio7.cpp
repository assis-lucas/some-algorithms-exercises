#include <stdio.h>
#include <stdlib.h>

main()
{
	float idade, altura, peso, x, qntd_i, qntd_a, porc_p, rporc_p, rqntd_a, cont_a;
	
	for(x=0; x<=25; x=x+1){
		printf("\n\nDigite a idade: ");
		scanf("%f", &idade);
		printf("Digite a altura: ");
		scanf("%f", &altura);
		printf("Digite o peso: ");
		scanf("%f", &peso);
		
		if(idade > 50){
			qntd_i = qntd_i + 1;
		}else if(idade >= 10 && idade <= 20){
			qntd_a = qntd_a + altura;
		}else if(peso < 40){
			porc_p = porc_p + 1;
		}
	}
	
	rqntd_a = qntd_a / qntd_i;
	rporc_p = (porc_p / 25) * 100;
	
	printf("Quantidade de pessoas com idade superior a 50 anos: %.0f\n", qntd_i);
	printf("Media de alturas das pessoas com idade entre 10 e 20 anos: %.2f\n", rqntd_a);
	printf("Porcentagem de pessoas com peso inferior a 40Kg: %.0f porcento\n", rporc_p);
	
}

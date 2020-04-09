#include<stdio.h>

main()

{
	float a, b, r;
	int c;
	printf("Digite A:");
	scanf("%f", &a);
	printf("Digite B:");
	scanf("%f", &b);
	printf("Escolha a operacao:\n");
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	
	printf("Operacao:\n");
	scanf("%d", &c);
	
	switch (c) {
	case 1:
		r= a+b;
		printf("Resultado: %f\n", r);
	break;
	case 2:
		r= a-b;
		printf("Resultado: %f\n", r);
	break;
	case 3:
		r= a*b;
		printf("Resultado: %f\n", r);
	break;
	case 4:
		if (b==0) {
		printf("Divisao por 0");	
		} else {
		r=a/b;
		printf("Resultado: %f", r);
		}
	break;
	default:
		printf("Op. Invalida");
	}
}

#include<stdio.h>

main()

{
	int n, x, conta;
	conta = 0;
	for (x=0; x<=15; x=x+1){
	printf("Digite um valor:");
	scanf("%d", &n);
	if (n>30) {
	conta = conta+1;
	}	
	}
	printf("Resultado: %d", conta);
	
}


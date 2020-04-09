#include <stdio.h>
#include <stdlib.h>

main(){
	struct pessoa{
		char nome[50];
		int idade;
	};
	struct pessoa A[3];
	int i, op, c;
	
	printf("Inserir Registro? 1-Sim / 2-Nao");
	scanf("%d", &op);
	
	while (i<3 && op==1){
		printf("Nome:");
		scanf("%s", &A[i].nome);
		printf("Idade:");
		scanf("%d",&A[i].idade);
		i++;
		printf("Inserir Registro? 1-Sim/2-Nao");
		scanf("%d", &op);
	}
		system("cls");
		
		printf("Consulta pelo codigo (999p/sair):");
		scanf("%d", &c);
		
		while ( c < 999){
			if(c>=0 && c<=2){
				printf("%s-%d", A[c].nome,A[c].idade);
			}else{
				printf("Codigo Invalido!\n");
			}
		}
		system("pause");
		system("cls");
		printf("Consulta pelo codigo(999p/sair):");
		scanf("%d", &c); 
	}


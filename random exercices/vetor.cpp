#include <stdio.h>

main(){
	
	int A[4];
	int j,i,aux;
	
	for(i=0;i<4;i++){
    printf("Valor:");
	scanf("%d",&A[i]);		
	}
    for(i=0;i<4;i++){
    printf("%d\n",A[i]);
	}
    i=0;
    j=3;
	while(i<j){
		aux=A[i];
		A[i]=A[j];
		A[j]=aux;
		i++;
		j--;
	}
	for(i=0;i<4;i++){
		printf("%d\n",A[i]);
	}

}


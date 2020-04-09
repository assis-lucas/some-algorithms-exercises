#include <stdio.h>
#include <stdlib.h>

main(){
	int A[2][2];
	int l,c;
	
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
			printf("Valor:");
			scanf("%d", &A[l][c]);
		}
	}
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
		 printf("%d\n",A[l][c]);
		 
		}
	}
}

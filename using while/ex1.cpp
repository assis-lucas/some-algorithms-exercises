#include <stdio.h>
#include <stdlib.h>

main()
{
	int valor, ma, me;
	printf("Coloque o Valor:");
	scanf("%d", &valor);
    ma=valor;
    me=valor;
    
    while (valor!=0){
    	ma=valor;
	}
   if (valor>ma){
   	ma=valor;
   }
   if (valor<me){
   	me=valor;
   }
   printf("Valor:");
   scanf("%d", &valor);
   printf("Maior: %d Menor:%d",ma,me);
}

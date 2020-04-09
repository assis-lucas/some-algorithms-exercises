#include <stdio.h>
#include <stdlib.h>

main()
{
	int r, x, idade;
    for (x=0 ; x<=10 ;x=x+1){
    printf("Coloque a Idade:");
    scanf("%d", &idade);
    
    if (idade>=18){
        r = r+1;
	}
}
    printf("Pessoas: %d", r);
}

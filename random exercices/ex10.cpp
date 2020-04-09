#include <stdio.h>
#include <stdlib.h>

main()
{
	int idade, contai;
	float tidade, media;
	contai=0;
	tidade=0;
	
	printf("Coloque a Idade:");
	scanf("%d", &idade);
	
	while (idade>0){
	     tidade=tidade+idade;
	     contai=contai+1;
	     
	printf("Coloque a Idade:");
	scanf("%d", &idade);
	}
	if (contai!=0){
	media=tidade/contai;
	printf("Media: %f", media);
	}
}

#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, r, r1, r2, r3, r4, r5, r_p1, r_p2, idade;
	for ( x=0 ; x<=15; x=x+1){
	
	printf("Coloque a Idade:");
	scanf("%d", &idade);
	
	if (idade<=15){
		r1=r1+1;
	}else if(idade>=16 && idade<=30){
		r2=r2+1;
	}else if(idade>=31 && idade<=45){
		r3=r3+1;
	}else if(idade>=46 && idade<=60){
		r4=r4+1;
	}else if(idade<=61){
		r5=r5+1;
	}
}
	r_p1 = (r1/15) *100;
	r_p2= (r5/15) *100;
	
	printf("Pessoas na primeira faixa etaria: %d\n", r1);
    printf("Pessoas na segunda faixa etaria: %d\n", r2);
    printf("Pessoas na terceira faixa etaria: %d\n", r3);
    printf("Pessoas na quarta faixa etaria: %d\n", r4);
    printf("Pessoas na quinta faixa etaria: %d\n", r5);
}

#include <stdio.h>
#include <stdlib.h>

main()
{
	float n, x, s;
	
	s=0;
	
	printf("Digite N: ");
	scanf("%f", &n);
	
	for(x=1; x<=n; x=x+1){
		s=s+(1/x);
		printf("Soma: %.2f\n", s);
	}
}

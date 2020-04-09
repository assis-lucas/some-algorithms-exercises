#include <stdio.h>
#include <stdlib.h>

main()
{
	float x, s , n;
	s=0;
	printf("Coloque um Numero:");
	scanf("%f", &n);
	
	for ( x=1 ; x<=n ; x=x+1){
	s= s+(1/x);
	printf("Soma: %.2f\n", s);

}
}

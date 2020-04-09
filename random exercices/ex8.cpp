#include <stdio.h>
#include <stdlib.h>

main()
{
	float p1, p2, p3;
	float m;
	int i;
	
	for(i=0; i<40; i=i+1){
	printf("Coloque a p1:");
	scanf("%f", &p1);
	printf("Coloque a p2:");
	scanf("%f", &p2);
	printf("Coloque a p3:");
	scanf("%f", &p3);
	
	m=(p1+p2+p3)/3;
	
	printf("Media: %.2f\n", m);

}
}

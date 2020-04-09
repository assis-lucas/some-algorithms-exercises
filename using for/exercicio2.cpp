#include <stdio.h>
#include <stdlib.h>

main()
{
	float x, num, y;
	
	for(x=1; x<=10; x=x+1){
		for(y=1; y<=10; y=y+1){
		
		num = x*y;
		
		printf("Tabuada do %.0f\n", y);
		printf("%.0f X %.0f = %.0f\n", y, x, num);
		
		}
		system("pause");
	}
}

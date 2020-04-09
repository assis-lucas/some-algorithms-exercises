#include <stdio.h>
#include <stdlib.h>

main()
{
	int r, x, y;
	for ( x=1 ; x<=10; x=x+1){
	 for ( y= 1; y<=10; y=y+1){
	 	r=x*y;
	printf("%d x %d=%d\n",y,x,r);
	 }
	 }
}

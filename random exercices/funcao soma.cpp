#include <stdio.h>

int soma (int n1, int n2){
	int r;
	r = n1+n2;
  return r;
}

main (){
	int a,b,c;
	
	printf("A:");
	scanf("%d",&a);
	
	printf("B:");
	scanf("%d",&b);
	
	c=soma(a,b);
	
	printf("Soma: %d",c);

}

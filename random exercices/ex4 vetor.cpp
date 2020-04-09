#include <stdio.h>

main(){
	
	int A[10],par[10],impar[10];
	int n,i,j,s;
	i=0;
	j=0;
	s=0;
	while (i<10)
	{
		printf("Digite um Numero>");
		scanf("%d",&n);
		A[i]=n;
		if(n % 2 == 0)
		{
			
			par[j]=n;
			j=j+1;
		}
		else
		{
			
			impar[s]=n;
			s=s+1;
		}
		i=i+1;
	}
	i=0;
	 while (i<10)
	 {
	 	printf("Numeros digitados:%d",A[i]);
	 	i=i+1;
	 }
	 i=0;
	 while (i<j)
	 {
	 	printf("Numeros pares:%d",par[i]);
	 	i=i+1;
	 }
	 i=0;
	 while (i<s)
	 {
	 	printf("Numeros impares:%d",impar[i]);
	 	i=i+1;
	 }
}

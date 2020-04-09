#include <stdio.h>


void parimpar(int a){
	if (a % 2 == 0){
	   printf("Par\n");	
	}else{
	   printf("Impar\n");
	}
}
main(){
 
   int n;
   
   printf("Numero:");
   scanf("%d",&n);
   
   parimpar(n);	

}

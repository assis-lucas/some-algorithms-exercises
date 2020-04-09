#include <stdio.h>
#include <stdlib.h>

main(){
  int n, h, i=0;
  
  printf("Digite N:");
  scanf("%d", &n);
  
  do{
  	h=h+10;
  	i=i+1;
  	
  }while(i<n);
  printf("H:%d",h);
}

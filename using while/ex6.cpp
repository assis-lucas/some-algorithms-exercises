 #include <stdio.h>  
 int main(){  
      int num1, num2, contar;  
      printf("Informe dois numeros. Que o software vai escrever os numeros entre eles\n");  
      printf("Primeiro Numero: ");  
      scanf("%i", &num1);  
      printf("Segundo numero: ");  
      scanf("%i", &num2);  
      while(num1<num2){  
                       printf("%i\n", num1);  
                       num1++;  
                       }  
      return 0;  
 }  

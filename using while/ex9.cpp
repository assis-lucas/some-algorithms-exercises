#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
int valor1, valor2, intervalo,temporario1,temporario2; 

printf("Informe o primeiro valor:\n "); 
scanf("%d", &valor1); 
printf("\nInforme o segundo valor:\n "); 
scanf("%d", &valor2); 

if (valor1 < valor2) 
{ 
temporario1 = valor1; 
} 
else 
{ 
temporario1 = valor2; 
} 

if (valor2 > valor1) 
{ 
temporario2 = valor2; 
} 
else 
{ 
temporario2 = valor1; 
} 
valor1 = temporario1; 
valor2 = temporario2; 

if (valor1 % 1 == 0) 
valor1 < valor2 + 1; 
else 
valor1 > valor2 + 1; 
printf("\n\n"); 
printf("Numeros no intervalo:"); 
printf("\n\n"); 


for (intervalo=valor1; intervalo <= valor2 ; intervalo=intervalo+1) 
{ 
printf("%d\t",intervalo); 
} 
printf("\n"); 
printf("\n"); 
printf("\n\n"); 
printf("\n\n"); 

system("pause"); 
return 0; 
}

#include <stdio.h>//biblioteca
int main(){//função principal
int num, coxx,result;//variaveis
printf("Informe um numero maior que ZERO: ");//comando de saisa
scanf("%i", &num);//comando de entrda
for(coxx=0; coxx<num; coxx++){//comendo de Repetição, sendo o COXX menor que o NUM, devera repetir a estrutura.
            result=coxx*coxx;//fomula para calcular o quadrado
            printf("\nO quadrado de %i e' %i\n", coxx, result);//O resultado que aparecerar na tela
            }
            return 0;
            }

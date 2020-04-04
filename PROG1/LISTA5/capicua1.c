#include <stdio.h>
#include <stdlib.h>

int main(){
int numero,aux, m, c, d, u;
printf("Digite um valor inteiro:\n");
scanf("%d",&numero);
printf("\n%d\n\n", numero);
m = numero / 1000;
aux = numero % 1000;
c = aux / 100;
aux %= 100;
d = aux / 10;
u = aux % 10;
if(m == u && c == d){
printf("E capicua\n");
}
else{
printf("Nao e capicua\n");
}
}


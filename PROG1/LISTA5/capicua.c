#include <stdio.h>
#include <conio.h>
#include <conio.h>

main(){
int num, x1, x2;
printf("Digite um numero de 4 digitos: ");
scanf("%d",&num);



x1 = num/100; //resulta 20

x2 = num - (x1*100); //resulta 25

if ((x1+x2)*(x1+x2) == num){
printf("\nE um Capicua"); }
else {
printf("\nNao e Capicua!");
printf("\n");
			}
			system("pause");
}
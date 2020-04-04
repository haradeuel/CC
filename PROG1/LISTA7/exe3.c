#include <stdio.h>
#include <stdlib.h>


int main()
{
	int idade;
    char nome[10],sexo;
    
    printf("DIGITE SEXO:");
    scanf("%c",&sexo);
    printf("DIGITE O NOME:");
    scanf("%s",&nome);
    printf("DIGITE A IDADE:");
    scanf("%d",&idade);
    

    if(sexo=='m' && idade>=21)
    {

    	printf("%s",nome);
    }
    else
    {
     	printf("Fora das condicoes");

    } 	
    



}
#include <stdio.h>
#include<stdlib.h>

int main()
{
  int num,centena,unidade,milhar,dezena;	
  printf("Digite um valor:");
  scanf("%d"¨,&num);
  
  milhar=num/1000;
  centena=(num%100)/10
  dezena=(num%100)%10

  if(centena==dezena && milhar==unidade)
  {


     printf("EH");

  } 
  else
    printf("Não");

}
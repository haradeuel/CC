#include <stdio.h>
#include <stdlib.h>


int main()
{
	
 int num;
 scanf("%d",&num);
 
 if(num<=9 && num>=1)
 {
  printf("Esta Dentro da faixa:%d",num);

 } 
 else
 {
 	if(num>9)
 	{

      printf("Acima da Faixa:%d",num);

 	}	
 	else
    {

      printf("Abaixo da Faixa:%d",num); 

    }

 }	
      
}
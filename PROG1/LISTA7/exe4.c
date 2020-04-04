#include <stdio.h>
#include <stdlib.h>


int main()
{
 	float cm,polegadas;	
    while(cm<20)
    {
     	scanf("%f",&cm);
        polegadas=cm*2.54;
    	printf("valor em cm:%0.2f valor em polegadas:%0.2f",cm,polegadas);
    }


}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
  int vet[3],i;


   for(i=0;i<3;i++)
   {
     printf("Digite o elemento:"); 
     scanf("%d",&vet[i]);

   }
   
   for(i=0-1;i>=0;i--)
   {
 
     printf("%d",vet[i]);

   }
   
}
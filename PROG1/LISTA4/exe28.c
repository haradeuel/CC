#include <stdio.h>
#include <stdlib.h>


int main()
{
  int idade;
  scanf("%d",&idade);	
  
  if(idade>=5 && idade<=7)
  {

     printf("CATEGORIA INFANTIL A:%d",idade);

  }
  else
	{
	  	if(idade>=8 && idade<=10)
	  	{

	       printf("CATEGORIA INFANTIL B:%d",idade);

	  	}
	  	else
	  	{	
		  	 if(idade>=11 && idade<=13)
		  	 {

		       printf("CATEGORIA JUVENIL A:%d",idade);

		  	 }   	
		     else 
		    {

               if(idade>=14 && idade<=17)
               {

               	   printf("CATEGORIA JUVENIL B:%d",idade);

               }
               else
               {
                   printf("CATEGORIA SENIOR:%d",idade);	
                }
            }   
        }
     }      

}		 


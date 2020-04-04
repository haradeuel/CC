	#include<stdio.h>
	#include<stdlib.h>


	int main()
	{
	  int opc;
	  int associado;
	  float total=0;
	  int data,jai,opcio,qtd;     
	  
	  printf("QUER FAZER INSCRICAO BASICA:");
	  scanf("%d",&opc);

	  if(opc)
	  {

	     printf("Eh associado??");
	     scanf("%d",&associado);

	     if(associado==1)
	     {

	        printf("QUER FAZER JAI??");
	        scanf("%d",&jai); 

	        if(jai==1)
	        {
	           printf("QUER FAZER ALGUM MINI-CURSO OU WORSHOP??");
	           scanf("%d",&opcio);

	              if(opcio==1)
	              {
	              	 printf("QUANTOS??");
	              	 switch (qtd)
	                 {
                       case 1:
                         total=total-(total*0.02);

	                 }
       
	              }	
	              else
	              {
                     printf("QUAL A DATA??")
                     scanf("%d",&data);

                     switch (data)
                     {

                        case  1:
                          total=total+86;
                        break;
                        case 2:
                          total=total+97;
                        break;

                     } 


	              }	
             

	        }
	        else
	        {
	          if(jai==2)
	          {	

	           	printf("Qual a data??");
	           	scanf("%d",&data);

	           	switch(data)
	           	{
	             	case 1:
	              	  total=total+129;
	                break; 
	                case 2:
	                  total=total+150;
	                break;  
	                
	             }

	        }
	       
	 

	        }	
	  

	      }
	   }
	   else
	     if(associado==2)
	     {
	     	printf("Qual a data??");
	     	scanf("%d",&data);

	     }

	 printf("TOTAL A PAGAR:%f",total);       
	}     
	     
	    
	     
	   
	        

	        
	    
	    

	  
	 	


	     


	    
	    

	  
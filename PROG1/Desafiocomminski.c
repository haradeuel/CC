#include <stdio.h>
#include <stdlib.h>



int main()
{
  int mes,dia,njai;
  int flagdata=0,flagassociado,totaljai;
  float total=0,desconto=0,njai2=0;	
  
  printf("############DIGITE A DATA############\nDIGITE MES:");
  scanf("%d",&mes);
  printf("DIGITE O DIA:");
  scanf("%d",&dia);
 
  
  if((mes<06)||(dia<=3 && mes==6 ))
  {

     flagdata=1;    
  
  }
  else
  {
    if(mes>6)
    {
      
      flagdata=2;
      printf("FLAGDATA EH:%d\n",flagdata);

    }
  }
 
  printf("VOCE EH ASSOCIADO??");
  scanf("%d",&flagassociado);
  printf("FLAGHASSSOCIADO EH:%d",flagassociado);



  if(flagassociado==1)
  {

     total=total+129.00;

  }
  else
  {
     
    total=total+160.00;

  }
  printf("\n%f\n",total);

  printf("QUAL A QUANTIDADE DE JAI??");
  scanf("%d",&njai);

  switch (njai)
  {
    case 0 || 1 :
      desconto=0;   
      break;
    case 2:
       desconto=0.05;
       break;
    case 3:
       desconto=0.1;
    case 4:
       desconto=0.2;   
       break;	
 
  }

  if(flagdata!=1)
  {

     if(flagassociado)
     {

       total+=21;
       total+=njai2*97; 
       printf("\n%f\n",total);

     }
     else
     {
      total+=24;
      totaljai=njai2*184; 
      printf("\n%f nao associado\n",totaljai);

     }
   }
   else
   {
     if(flagassociado)
     {

       
       total+=njai2*86; 
       printf("\n%f\n",total);

     }
     else
     {
      
      total+=njai2*160; 
      printf("\n%f\n",total);
     }



   }
     total=total-(total*desconto);
     printf("\n%f\n",total);

}
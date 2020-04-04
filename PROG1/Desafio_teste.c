#include <stdio.h>
#include <stdlib.h>



int main()
{
    
    int opc,data,associado,jai;
    float total=0;
    
   printf("QUER FAZER SUA INSCRICAO??");
   scanf("%d",&opc);
   
           
   if(opc==1)
   {
       
       printf("EH ASSOCIADO??");
       scanf("%d",&associado);
       

       if(associado==1)
       {
          printf("QUER FAZER A JAI??");
          scanf("%d",&jai);


       }
       else
       { 
         if(associado==2)
         { 
            switch (data)
            {
              case 1:
                total=total+160;
               break;
               case 2:
                 total=total+184;
               break; 
             }   
          }
        }
          

           
   }    
   else
   {      
           printf("INSCRICAO CANCELADA\n");
   }
   
 printf("TOTAL A PAGAR:%f\n",total);       
       
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

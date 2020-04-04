#include <stdio.h>
#include <stdlib.h>


int main()
{
  int cod,opc;
  float total=0;
    do
    {
      printf("ESCOLHA UMA OPCAO,SENDO 1 PARA 'LANCHE'2 PARA 'PROMO',3 PARA 'CLOSE':");
      scanf("%d",&opc);
      if(opc==1)
      {
         printf("DIGITE O COD DO LANCHE:");
         scanf("%d",&cod);

         switch (cod)
         {
           case 100:
             total=total+5;
           break;
           case 101:
             total=total+6;
           break;
           case 102:
             total=total+8.50;
           break;
           case 103:
             total=total+6;
           break;   

        
          }

          printf("DIGITE O COD DA BEBIDA:");
          scanf("%d",&cod);

         switch (cod)
         {
           case 200:
             total=total+2;
           break;
           case 201:
             total=total+2.50;
           break;
           case 203:
             total=total+3.50;
           break;  
          }

          printf("DIGITE O COD DA SOBREMESA:");
          scanf("%d",&cod);

          switch(cod)
          {
             case 300:
               total=total+3;
             break;  
             case 301:
               total=total+3.50;
             break;  
          }
                   
                 
       }   
      if(opc==2)
      {

          printf("DIGITE COD DA PROMO:");
          scanf("%d",&cod);

          switch (cod)
          {

            case 400:
              total=total+400;
            break;  
          }
      } 
          
        
    }while(opc<3);
  printf("TOTAL A PAGAR:%f",total);   
}
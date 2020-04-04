#include<stdio.h>
#include<conio.h>
main()
{
      int maior=0, num=1;

   

      while(num!=0)
      {
           printf("DIGITE UM NUMERO OU 0 PARA FINALIZAR:");
           scanf("%d",&num);

           if(num>maior)
           {
                maior=num;
           }
      }

      printf("O MAIOR NUMERO EH: %d",maior);

      
}
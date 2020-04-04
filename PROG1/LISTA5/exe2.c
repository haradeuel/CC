#include <stdio.h>
#include <stdlib.h>


int main()
{
	
 int num1=0,num2=0,result;
 char operacao;
 printf("DIGITE A OPERAÇÃO:");
 scanf("%c",&operacao);
 printf("DIGITE DOIS VALORES:");
 scanf("%d%d",&num1,&num2);


 switch (operacao)
 {
   case '+':
     result=num1+num2;
   break;
   case '-':
     result=num1-num2;
   break;  
   case '/':
      result=num1/num2;
   break;   
   case '*' :
      result=num1*num2;
   break;
   
  }   

   printf("RESULTADO:%d",result);
}





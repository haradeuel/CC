#include <stdio.h>
#include <stdlib.h>


int main()
{
	
  int tabuada,x;
  
  printf("Digite a tabuada:");
  scanf("%d",&tabuada);


  for(x=0;x<=10;x++)
  {
   	printf("%dX%d=%d\n",tabuada,x,tabuada*x);
  }


}
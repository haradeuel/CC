#include <stdio.h>
#include <stdlib.h>


int main ()
{
	
  int tabuada,x=0;
  printf("DIGITE A TABUADA:");
  scanf("%d",&tabuada);
  while(x<=10)
  {
    printf("%dx%d=%d\n",tabuada,x,tabuada*x);
    x++;
  }



}
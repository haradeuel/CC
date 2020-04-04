#include <stdio.h>
#include <stdlib.h>


int main()
{
  int tabuada,x=0;
  printf("DIGITE A TABUADA:");
  scanf("%d",&tabuada);

  do
  {
    printf("%dX%d=%d\n",tabuada,x,tabuada*x);
    x++;


  }while(x<=10);
 

}
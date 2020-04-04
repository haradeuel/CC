#include <stdio.h>
#include <stdlib.h>


int main ()
{

  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  
  if(a>b || a>c)
  {
xc
    printf("%d%d%d",a,b,c);

  }
  else
  {

    if(b>a || b>c)
    { 
      printf("%d%d%d",b,a,c);	
    }
    else
    {
      printf("%d%d%d",c,a,b)
    }
  
  }  

}
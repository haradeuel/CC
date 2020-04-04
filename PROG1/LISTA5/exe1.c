#include <stdio.h>
#include <stdlib.h>


int main()
{
	
  int num,mult;
  scanf("%d",&num);

  if((num%10)==0)
  {
     mult=10; 
  
  }
  else 
    if((num%2)==0)
    {

      mult=2;
    }
    else
    {
      if((num%5)==0)
      {
        mult=5;
         
      }	
      else
      {
        mult=0;

      }
    }

   printf("%d",mult);


}

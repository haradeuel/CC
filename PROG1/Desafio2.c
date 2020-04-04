#include <stdio.h>
#include <stdlib.h>

int main()
{
	
  int t,pa,pb,anos=0;
  float g1,g2;

  
  scanf("%d",&t);

  while(t>0)
  {
     
    
     scanf("%d",&pa);
     scanf("%d",&pb);
     scanf("%f",&g1);
     scanf("%f",&g2);

     while(pa<=pb)
     {
 			pa+=pa*(g1/100);
 			pb+=pb*(g2/100);
 			anos++;


 			if(anos>100)
 			{
                 printf("Mais de 1 seculo.\n");
                 break;
                 

 			}	

    
     }
     
   if(anos<=100)
   {
     printf("%d anos.\n",anos);

   }	
   t--;
   anos=0; 
  }    

      

}
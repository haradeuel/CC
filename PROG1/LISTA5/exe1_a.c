#include <stdio.h>
#include <stdlib.h>

int main()
{
	
  int a,b,c,d,m1,m2,m3;

  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>b)
  {

    m1=a;  

  }
  else
  {
    m1=b;

  }
  if(c>d)
  {

    m2=c;   

  }
  else
  {

    m2=d;

  }
  if(m1>m2)
  {

     m3=m1;

  }
  else
  {

    m3=m2;

  }

  printf("O maior eh:%d",m3);
}

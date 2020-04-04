#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;

    printf("digite o primeiro numero");
    scanf("%d",&a);
    printf("digite o segundo numero");
    scanf("%d",&b);
    printf("digite o terceiro numero");
    scanf("%d",&c);

    if(a > b && a > c)
        printf("%d", a);
    else
    if(b>a && b>c)
        printf("%d", b);
    else
        printf("%d", c);
}

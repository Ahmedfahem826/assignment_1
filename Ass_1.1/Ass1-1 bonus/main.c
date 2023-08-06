#include <stdio.h>
#include <stdlib.h>
int x;
int y;
int z;
int main()
{
scanf("%d",&x);
y=x/2;
z=y*2;
if(z==x)
    printf("even");
    else
        printf("odd");


    return 0;
}

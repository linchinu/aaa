#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x,y;
    printf("please input x: \n");
    scanf("%d",&x);
    
    printf("please input y: \n");
    scanf("%d",&y);
    
    printf(" %d + %d = %d \n",x,y,x+y);
    printf(" %d - %d = %d \n",x,y,x-y);
    printf(" %d * %d = %d \n",x,y,x*y);
    printf(" %d / %d = %d \n",x,y,x/y);
    printf(" %d + %d = %d \n",++x,y,x+y);
    printf(" %d + %d = %d \n",x++,y,x+y);
    printf(" %d + %d = %d \n",--x,y,x+y);
    printf(" %d + %d = %d \n",x--,y,x+y);
    printf(" %d + %d = %d \n",x,++y,x+y);
    printf(" %d + %d = %d \n",x,y++,x+y);
    printf(" %d + %d = %d \n",x,--y,x+y);
    printf(" %d + %d = %d \n",x,y--,x+y);

    return 0;
}

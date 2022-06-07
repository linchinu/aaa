#include <stdio.h>

int min(int aa,int bb);

int main()
{
    int aa,bb,sum;
    
    printf("please input aa hr bb min \n");
    printf("aa = \n");
    scanf("%d",&aa);
    printf("bb = \n");
    scanf("%d",&bb);
    
    
    sum = min(aa,bb);
    printf("min = %d \n",sum);
    
    return 0;
}

int min(int aa, int bb) 
{
    int result;
    result = aa*60+bb;
    return result;                     
    
}

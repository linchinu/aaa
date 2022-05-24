#include <stdio.h>
using namespace std;
int main()
{
    int a[6] = {8,3,6,10,45,12};
    int b[6] = { };
    int i,n;
    int x,y;
    
    n = sizeof(a)/sizeof(int);
    for(i=0;i < n;i++){
        printf("a[%d] = %d \n",i,a[i]);
    }
    
    y = sizeof(b)/sizeof(int);
    for(x=0;x < 6;x++){
        printf("請輸入數字:");
        scanf("%d",&b[x]);
    } 
    
    for(x=0;x < 6;x++){
        printf("b[%d] = %d \n",i,b[x]);
    }

    return 0;
}

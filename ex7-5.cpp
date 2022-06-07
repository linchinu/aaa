#include <iostream>
using namespace std;

int f(int n){
    if(n==1){
        return 1;
    }
    return n*f(n-1);
}

int main()
{
    int x;
    printf("請輸入階乘 \n");
    printf("階乘 = \n");
    scanf("%d",&x);
    int i=x;
    for(i=x;i <= x;i++){
        printf(" %d! = %d \n",i,f(i));
    }
   
    return 0;
}



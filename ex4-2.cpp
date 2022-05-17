/***
題目:圓周長面積
***/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int r;
    
    
    printf("please input r:\n");
    scanf("%d",&r);
    
    if( r >= 0  ){
        printf(" 面積 ==> %f\n", r*r*3.14);
        printf(" 周長 ==> %f\n", r*2*3.14);
    }else{
        printf("error");
    }
    
    return 0;
}

/***
題目:閏年
我不知道正確閏年的寫法
所以直接除以4
***/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int year;
    
    printf("please input year:\n");
    scanf("%d",&year);
    
    if( year%4 == 0){
        printf(" 是閏年 ");
    }else{
        printf("不是閏年");
    }
    
    return 0;
}

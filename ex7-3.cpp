#include <stdio.h>

int mulNumbers(int a, int b);

int main()
{
    int n1,n2,sum;
    printf("輸入矩形的長和寬: ");
    scanf("%d %d",&n1,&n2);
    sum = mulNumbers(n1, n2);
    printf("面積 = %d \n",sum);
    
    return 0;
}

int mulNumbers(int a, int b) 
{
    int result;
    result = a*b;
    return result;                     
    
}

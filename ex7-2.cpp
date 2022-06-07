#include <stdio.h>
int addNumbers(int a, int b); // function prototype
int subNumbers(int a, int b); // function prototype
int mulNumbers(int a, int b); // function prototype
int divNumbers(int a, int b); // function prototype


int main()
{
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);  // function call
    printf("sum = %d \n",sum);

    sum = subNumbers(n1, n2);  // function call
    printf("sub = %d \n",sum);

    sum = mulNumbers(n1, n2);  // function call
    printf("sumul = %d \n",sum);

    sum = divNumbers(n1, n2);  // function call
    printf("sud = %d \n",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                     
    //return statement
}

int subNumbers(int a, int b)         // function definition   
{
    int result;
    result =(a-b);
    return result;                     
    //return statement
}

int mulNumbers(int a, int b)         // function definition   
{
    int result;
    result = a*b;
    return result;                     
    //return statement
}

int divNumbers(int a, int b)         // function definition   
{
    int result;
    result = a/b;
    return result;                     
    //return statement
}

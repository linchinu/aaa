#include <stdio.h>
int main() {
    char op;
    double first, second;
    printf("Enter an op (+, -, *,): ");
    scanf("%c", &op);
    printf("Enter two op: ");
    scanf("%lf %lf", &first, &second);

    if (op){
    }else if ('+'){
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        
    }else if ('-'){
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        
    }else if ('*'){
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        
    }else if ('/'){
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        
        // operator doesn't match any case constant
    }else{
        printf("Error! op is not correct");
    }

    return 0;
}

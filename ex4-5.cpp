#include <iostream>
#include <stdio.h>

int main() {
    
    int score;
    
    printf("your score:");
    scanf("%d",&score);
    
    if ( score <= 100 && score >= 90 ){
        printf("A");
        
    }else if ( score < 90 && score >= 80 ){
        printf("B");
        
    }else if ( score < 80 && score >= 70 ){
        printf("C");
        
    }else if ( score < 70 && score >= 60 ){
        printf("D");
    
    }else if ( score < 60 && score >= 0 ){
        printf("E");
        
    }else{
        printf("輸入錯誤");
    }
}    
    

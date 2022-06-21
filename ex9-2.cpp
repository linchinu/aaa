#include <iostream>
void print_array(int*p,int n){
    int i,nl = sizeof(p)/sizeof(int);
    printf(" in function, array size n = %d\n",nl);
    for(i = 0 ; i < n ;i++){
        printf("%d\n",p[i]);
    }
    printf("\n");
}
int main(){
    int i,a[] = { 1, 2, 3, 4, 7 , 10, 13 };
    int n = sizeof(a)/sizeof(int);
    int*p = a;
    printf(" array size n = %d\n",n);
    print_array(p,n);
    
    return 0;
}

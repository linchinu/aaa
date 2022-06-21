#include <iostream>
int main(){
    int i,arr[] = { 1, 2, 3, 4, 7 , 10, 13 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Number of elements:%lu\n",sizeof(arr)/sizeof(arr[0]));
    for(i = 0 ; i < n ;i++){
        printf("%d\n",arr[i]);
    }

    printf("arr[%d] = %d\n",3,arr[3]);
    printf("arr[%d] = %d\n",9,arr[9]);
    
    return 0;
}

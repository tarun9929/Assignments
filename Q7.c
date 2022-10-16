#include<stdio.h>

int main(){
    int n;

    printf("Enter a number \n");
    scanf("%d" , &n);

    int count = 0;

    while(n != 0){
        count++;
        if(n & 1 == 1){
            break;
        }
        n = n >> 1;
    }
    
    printf("%d" , count);

    return 0;
}
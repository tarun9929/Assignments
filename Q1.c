#include<stdio.h>

int main(){
    int n;
    
    printf("Enter a number \n");
    scanf("%d" , &n);

    printf("the unit digit is %d " , n % 10);

    return 0;
}
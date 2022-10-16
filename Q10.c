#include<stdio.h>

int main(){
    int n;

    printf("Enter a number \n");
    scanf("%d" , &n);

    n = n - (n % 10);

    printf("The value of n is %d\n" , n);

    return 0;
}
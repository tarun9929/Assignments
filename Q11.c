#include<stdio.h>

int main(){
    int n;
    int digit;

    printf("Enter a number \n");
    scanf("%d" , &n);
    printf("Enter a digit \n");
    scanf("%d" , &digit);

    n = n * 10 + digit;

    printf("%d" , n);
}
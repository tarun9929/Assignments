#include<stdio.h>

int main(){
    int n;
    int sum = 0;

    printf("Enter a 3 digit number \n");
    scanf("%d" , &n);

    sum = sum + (n % 10) + (n / 10 % 10) + (n / 100 % 10);

    printf("The digit sum of %d is %d " , n , sum);

    return 0;
}
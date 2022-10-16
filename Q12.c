#include<stdio.h>

int main(){
    float USD = 76.23;
    int INR;

    printf("Enter value of INR\n");
    scanf("%d" , &INR);

    printf("%d Rupee in USD is %f" , INR , USD * INR);

    return 0;
}
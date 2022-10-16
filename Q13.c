#include<stdio.h>

int main(){
    int n , rotat = 0;
    int a , b , c;

    printf("Enter a 3 digit number \n");
    scanf("%d" , &n);

    rotat = (rotat * 10 + (n / 10 % 10) * 10 + (n / 100) % 10) * 10 + (n % 10);

    printf("%d" , rotat);

    return 0;    
}
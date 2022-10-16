#include<stdio.h>

int main(){
    char ch = 'c';
    int n = 5;
    double d = 12.004;
    float f = 5.02;

    printf("Size of char is %d \n" , sizeof(ch));
    printf("Size of int is %d \n" , sizeof(n));
    printf("Size of double is %d \n" , sizeof(d));
    printf("Size of float is %d \n" , sizeof(f));

    return 0;
}
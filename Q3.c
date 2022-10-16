#include<stdio.h>

int main(){
    int a , b;

    printf("Enter the value of a\n");
    scanf("%d" , &a);
    printf("Enter the value of b\n");
    scanf("%d" , &b);

    printf("Befor Swaping \n");
    printf("The value of a is %d\n" , a);
    printf("The value of b is %d\n" , b);

    int temp = a;
    a = b;
    b = temp;

    printf("After Swaping \n");
    printf("The value of a is %d\n" , a);
    printf("The value of b is %d\n" , b);
    

    return 0;
}
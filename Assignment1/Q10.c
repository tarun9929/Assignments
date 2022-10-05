#include<stdio.h>

int main(){
    char date[10];
    char D[10];
    char M[10];
    char Y[10];

    printf("Enter a Date ");
    scanf("%s" , &date);

    printf("%s\n" , date);

    int i = 0;
    int k;
    for(i = 0 , k = 0; date[i] != '/'; i++){
        D[k++] = date[i];
    }
    D[k] = '\0';

    for(k = 0; date[i+1] != '/'; i++){
        M[k++] = date[i+1];
    }

    M[k] = '\0';

    for(k = 0; date[i+2] != '\0'; i++){
        Y[k++] = date[i+2];
    }
    Y[k-1] = '\0';
    
    printf("Day - %s , Month - %s , Year - %s" , D, M , Y);

    return 0;
}
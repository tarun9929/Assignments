#include<stdio.h>

int main(){
    char Time[10];
    char H[10];
    char M[10];

    int i;

    scanf("%s" , Time);

    for(i = 0; Time[i] != ':'; i++){
        H[i] = Time[i];
    }

    H[i++] = '\0';

    int k;
    for(k = 0; Time[i] != '\0'; i++){
        M[k++] = Time[i];
    }
    M[k] = '\0';

    printf("%s Hour and %s minute" , H , M);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        printf(">");
    }else if(a < b){
        printf("<");
    }else if(a == b){
        printf("==");
    }

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    int grade = 0;

    scanf("%d", &grade);

    if(100 < grade){
        printf("100 초과");
    }else if(90 <= grade){
        printf("A");
    }else if(80 <= grade){
        printf("B");
    }else if(70 <= grade){
        printf("C");
    }else if(60 <= grade){
        printf("D");
    }else{
        printf("F");
    }    
    return 0;
}
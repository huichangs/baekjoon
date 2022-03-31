#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int money = 0;
    int temp = 0;

    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b && b == c){
        money = 10000 + a*1000; 
    }else if(a == b){
        money = 1000 + a*100;
    }else if(b == c){
        money = 1000 + b*100;
    }else if(a == c){
        money = 1000 + a*100;
    }else{
        if(a > b){
            temp = a;
            if(a > c){
                temp = a;
            }else{
                temp = c;
            }
        }else{
            temp = b;
            if(b > c){
                temp = b;
            }else{
                temp = c;
            }
        }
        money = temp*100;
    }

    printf("%d", money);

    return 0;
}
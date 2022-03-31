#include<stdio.h>
#include<stdlib.h>

int main(){
    int h = 0;
    int m = 0;

    scanf("%d %d", &h, &m);

    if(m < 45){
        if(h == 0){
            h = 24;
        }
        h = h-1;
        m = 60 + m - 45;
    }else{
        m = m - 45;
    }

    printf("%d %d", h, m);

    return 0;
}
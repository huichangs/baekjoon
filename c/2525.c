#include<stdio.h>
#include<stdlib.h>

int main(){
    int h = 0;
    int m = 0;
    int c = 0;
    int add = 0;

    scanf("%d %d", &h, &m);
    scanf("%d", &c);


    add = c / 60;
    m = m + c - add*60;
    h = h + add;

    if(m >= 60){        
        m = m - 60;
        h++;
    }
    
    if(h > 23){
        h = h-24;        
    }


    printf("%d %d\n", h, m);

    return 0;
}
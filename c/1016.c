#include<stdio.h>
#include<stdlib.h> 
int array[1000001] = {0};

int main(){
    long long a;
    long long b;
    long long i;
    long long j;
    long long n;   
    long long find;
    long long count = 0;

    scanf("%lld %lld", &a, &b);

    long long size = b - a + 1;

    //제곱수 최대값
    for(i = 2; i*i <= b; i++){
        find = i;
    }

    //소수 찾기
    for(i = 2; i <= find; i++){
        for(j = 2; j <= find; j++){
            if(i % j == 0){
                array[i] = 1;
            }
        }
    }
    
    for(i = (find + 1); i < 1000000; i++){
        array[i] = 1;
    }

    printf("%lld \n", find);
    
    for(i = 0; i <= find; i++){
        printf("%d", array[i]);
    }


    /*long *array = (long*)malloc(sizeof(long) * size);

    for(i = a; i <= b ; i++){
        array[i] = i;
    }
 
    for(i = a; i <= b; i++){
        printf("%ld \n", array[i]);
    }*/

    for(j = 2; j <= find; j++){
        for(i = a; i <= b; i++){
            if(i % (j * j) == 0){
                count++;
            }
        }
    }

    

    printf("%lld", count);
    


    return 0;
}
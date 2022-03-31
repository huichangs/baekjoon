#include<stdio.h>
#include<stdlib.h>


int main()
{   
    int num1 = 0;
    int num2 = 0;
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    a = num2 / 100;
    b = (num2 - a*100) / 10;
    c = num2 - a*100 - b*10;

    n = num1 * num2;

    printf("%d\n", num1 * c);
    printf("%d\n", num1 * b);
    printf("%d\n", num1 * a);
    printf("%d\n", n);
   
    return 0;
}

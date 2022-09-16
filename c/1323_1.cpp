#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long num(int n){
	long long digit = 0;
	int i;
	while(n > 0){
		digit++;
		n /= 10;
	}
	
	digit = pow(10, digit);
	
	return digit;
}

int main(){
	int n, k, count = 1;
	int check[100001] = {0};
	int remain;
	long long digit;
	
	scanf("%d", &n);
	scanf("%d", &k);

	remain = n % k;
	
	digit = num(n);
	
	while(remain != 0){
		count++;
		remain = (remain * digit + n) % k;
		if(check[remain] == 1){
			count = -1;
			break;
		}else{
			check[remain] = 1;
		}
	}
	
	printf("%d", count);
	
	return 0;
}

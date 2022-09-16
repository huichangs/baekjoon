#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long long num(int n){
	int i;
	long long result = 1;
	
	for(i = 0; i < n; i++){
		result *= 10;
	}
	
	return result;
}

int main(){
	char tempN[10];
	int n, k, len, count = 1;
	int remain, firstRemain;
	long long digit;
	
	scanf("%s", &tempN);
	scanf("%d", &k);
	
	len = strlen(tempN);
	n = atoi(tempN);
	
	firstRemain = n % k;
	remain = n % k;
	
	digit = num(len);
	
	while(remain != 0){
		count++;
		remain = (remain * digit + n) % k;
		if(remain == firstRemain){
			count = -1;
			break;
		}
	}
	
	printf("%d", count);
	
	return 0;
}

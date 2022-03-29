#include<stdio.h>
#include<stdlib.h>

int main(){
	int a; //¹é 
	int b; //½Ê 
	int c; //ÀÏ 
	int d;
	int num = 0; 
	int temp1 = 0;
	int temp2 = 0;	
	int temp3 = 0;
	int count = 0;
	
	scanf("%d", &num);
	
	if(num > 1000){
		goto EXIT;
	}
	
	for(d = 0; d < 10; d++){
		for(a = 0; a < 10; a++){
			for(b = 0; b < 10; b++){
				for(c = 0; c < 10; c++){
					if(d*1000 + a*100 + b*10 + c > num){
						goto EXIT;
					}
					temp1 = a - b;
					temp2 = b - c;
					
					if(d == 1){
						break;
					}
					
					if(a == 0){
						count++;
					}
					else{
						 if(temp1 == temp2){
						 	count++;
						 }
					}
				}
			}
		}
	}
	
	EXIT : printf("%d", count - 1);
	
	
	return 0;
} 

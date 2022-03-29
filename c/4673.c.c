#include<stdio.h>
#include<stdlib.h> 

int main(){
	int sum = 0;
	int a; //천 
	int b; //백 
	int c; //십 
	int d; //일 
	int num = 0;
	
	int array[10000] = {0};
	int i;
	
	
	for(a = 0; a < 10; a++){
		for(b = 0; b < 10; b++){
			for(c = 0; c < 10; c++){
				for(d = 0; d < 10; d++){
					num = 1000*a + 100*b + 10*c + d;
					sum = num + a + b + c + d;
					
					if(sum < 10000){
					array[sum] = 1;
					}
				}
			}
		}
	}	
	
	for(i = 1; i<10000 ; i++){
		if(array[i] == 0){
			printf("%d \n", i);
		}
	}
	return 0;
}

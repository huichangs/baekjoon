#include<stdio.h>
#include<stdlib.h>

int main(){
	char s1[100] = {0};
	char s2[]= "abcdefghijklmnopqrstuvwxyz"; 
	int num[26] = {0};
	int i;
	int j;
	
	scanf("%s", &s1);
	
	for(i = 0; i < sizeof(num) / sizeof(int); i++){
		num[i] = -1;
	}
		
	for(i = 0; i < 26; i++){
		for(j = 0; j < 100; j++){
			
			if(s1[j] == s2[i]){
				if(num[i] == -1){			
					num[i] = j;

				}
				else{
					break;
				}	
			}							
		}	
	}	
	
	for(i = 0; i < sizeof(num) / sizeof(int); i++){
		printf("%d ", num[i]);
	}	
		
	return 0;
} 

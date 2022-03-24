#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int main(){
	int i;
	int j;
	int num;
	int count = 0;
	char find = '(';
	char* result;
	
	scanf("%d", &num);
	
	char s[num][50];
	
	for(j = 0; j < num; j++){
		scanf("%s", &s[j]);
	}
	
	for(j = 0; j < num; j++){
		count = 0;
		
		for(i = 0; i < 50; i++){
			
			if(count < 0){
				break;
			}
			
			if(s[j][i] == '\0'){
				break;
			}
			
			if(s[j][i] == '('){
				count = count + 1;
			}
			else if(s[j][i] == ')'){
				count = count - 1;
			}
		}
		
		result = strstr(s[j], "(");
	
		if(result == NULL){
			printf("NO");
		}else if(count == 0){
			printf("YES");
		}
		else{
			printf("NO");
			}
		printf("\n");
		
	}

	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100010

typedef struct{
	int stack[MAX_SIZE];
	int top;
}PrtStack;

PrtStack* createStack(){
	PrtStack *s;
	s = (PrtStack*)malloc(sizeof(PrtStack));
	s->top = -1;
	
	return s;
}

int insert(PrtStack *s, int data){
	s->top++;
	int i,j,find,temp;
	
	if(s->top == 0){
		s->stack[s->top] = data;
		return 1;
	}else{
		for(i = s->top - 1; i >= 0; i--){
			if(data <= s->stack[i]){
				find = i;
				find++;
				break;
			}
		}
		
		for(j = s->top; j > find; j--){
			s->stack[j] = s->stack[j - 1];
		}	
		
	}
	
	
	s->stack[find] = data;
	return 1;
}

int main(){
	PrtStack *s;
	s = createStack();
	
	int num,i,temp,mid;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		scanf("%d", &temp);
		insert(s, temp);
		mid = (s->top + 1) / 2;
		printf("%d", s->stack[mid]);
	}
	
	
	
	return 0;
}

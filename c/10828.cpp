#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_ERROR -1

//데이터정의
typedef int element;

typedef struct stacknode{
	element data;
	struct stacknode *link;
}StackNode;

typedef struct{
	int numOfNodes;
	StackNode *top; //header
}LinkedStack;

//연산 정의
LinkedStack* createStack(){
	LinkedStack *s = (LinkedStack*)malloc(sizeof(LinkedStack));
	s->numOfNodes = 0;
	s->top = NULL;

	return s;
}
int isEmpty(LinkedStack *s){
	if(s->top == NULL) return 1;
	else return 0;
}

int push(LinkedStack *s, element data){
	StackNode *newNode;

	newNode = (StackNode*)malloc(sizeof(StackNode));
	if(newNode ==NULL){
		return STACK_ERROR;
	}
	newNode->data = data;

	newNode->link = s->top;
	s->top = newNode;
	s->numOfNodes++;

	return 1;
}

element pop(LinkedStack *s){
	StackNode *temp;
	element data;

	if(isEmpty(s)){
		return STACK_ERROR;
	}

	temp = s->top;
	s->top = s->top->link;
	s->numOfNodes--;

	data = temp->data;
	free(temp);

	return data;
}

element peek(LinkedStack *s){
	if(isEmpty(s)){
		return STACK_ERROR;
	}

	return s->top->data;
}

int main(){
	char function[10];
	int pushNum;
	int command, i;
	LinkedStack *s1;

	s1 = createStack();
	
	scanf("%d", &command);
	
	for(i = 0; i < command; i++){
		scanf("%s", &function);
		if(strcmp(function, "push") == 0){
			scanf("%d", &pushNum);
			push(s1, pushNum);
		}else if(strcmp(function, "pop") == 0){
			printf("%d", pop(s1));
		}else if(strcmp(function, "size") == 0){
			printf("%d", s1->numOfNodes);
		}else if(strcmp(function, "top") == 0){
			printf("%d", peek(s1));
		}else if(strcmp(function, "empty") == 0){
			printf("%d", isEmpty(s1));
		}
	}

	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct stack{
	int top;
	int *buff;
	int size;
};

struct stack* init(int num){
	struct stack* s = (struct stack*) malloc(sizeof(struct stack));
	s->top = -1;
	s->buff = (int*) malloc(sizeof(int)*num);
	s->size = num;
	return s;
}

void push(struct stack *s, int item){
	if(s->top >= -1 && s->top < s->size - 1){
		s->top = s->top + 1;
		s->buff[s->top] = item;
	}
}

int top(struct stack *s){
	return s->top;
}

void pop(struct stack *s){
	if(s->top > -1){
		s->top = s->top - 1;
	}
}

void make_empty(struct stack *s){
	s->top = -1;
}

void traverse(struct stack *s){
	for(int i = 0; i <= s->top; i++){
		printf("%d ",s->buff[i]);
	}
}

int main(){
	struct stack *s = init(5);
	push(s,12);
	push(s,21);
	push(s,64);
	push(s,11);
	push(s,64);
	push(s,78);
	push(s,100);
	traverse(s);
	return 0;
}

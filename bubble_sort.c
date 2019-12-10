#include<stdio.h>
#include<stdlib.h>

#define LEN 128

/*
 * THE BUBBLE SORT ALGORITHM
 * THE STRUCTUE IS USED
 * THE POINTER IS USED
*/

struct list{
	int buff[LEN];
	int length;
};

struct list *init(int num){
	struct list *ls = (struct list*) malloc(sizeof(struct list));
	for(int i = 0; i < num; i++){
		scanf("%d",&ls->buff[i]);
	}
	ls->length = num;
	return ls;
}

void traverse(struct list *ls){
	for(int i = 0; i < ls->length; i++){
		printf("%d ",ls->buff[i]);
	}
	printf("\n");
}

struct list *bubble_sort(struct list *ls){
	for(int i = 0; i < ls->length - 1; i++){
		for(int j = 0; j < ls->length - i - 1; j++){
			if(ls->buff[j] > ls->buff[j+1]){
				int temp = ls->buff[j];
				ls->buff[j] = ls->buff[j+1];
				ls->buff[j+1] = temp;
			}
		}	
	}
	return ls;
}

int main(){

	int num;
	scanf("%d",&num);
	struct list *liste = init(num);
	traverse(liste);
	struct list *sort = bubble_sort(liste);
	traverse(sort);	
	return 0;
}

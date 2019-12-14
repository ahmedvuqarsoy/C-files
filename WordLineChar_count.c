#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 512

int main(int argc, char* argv[]){
	
	int charCount = 0;
	int wordCount = 0;
	int lineCount = 0;
	
	char name[20];
	strcpy(name,argv[1]);

	FILE *file = fopen(name, "r");
	
	if(file == NULL){
		printf("Unable! Error!");
		exit(0);
	}
	
	char buff;
	
	//ASCII 32 = SPACE
	//ASCII 10 = NEW LINE

	while((buff = fgetc(file)) != EOF){
		if((int)buff == 32){
			wordCount++;
		}
		else if((int)buff == 10){
			lineCount++;
			wordCount++;
		}
		
		else{
			charCount++;
		}
	}

	printf("\n");
	printf("Word count: %d\n",wordCount);
	printf("Line count: %d\n",lineCount);
	printf("Char count: %d\n",charCount);
	return 0;
}

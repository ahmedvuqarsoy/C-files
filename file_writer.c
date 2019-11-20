#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 128

/* THIS FILE APPENDS THE GIVEN NUMBER OF LINES TO THE TEXT FILE */

int main(int argc, char *argv[]){
	
	char name[64];
	strcpy(name, argv[1]);
	
	FILE *file = fopen(name, "a");

	int num;
	printf("How many lines you will write: ");
	scanf("%d",&num);
	
	char buff[SIZE];
	
	printf("\n");
	
	num++; // fgets() automatically add new line, so I add 1 to the number of lines

	while(num--){
		fgets(buff, SIZE, stdin);
		fputs(buff, file);
	}

	fclose(file);

	return 0;
}

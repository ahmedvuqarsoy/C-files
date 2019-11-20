#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 128

/* THIS FILE READ THE GIVEN FILE */

int main(int argc, char *argv[]){
	char name[64];
	
	strcpy(name, argv[1]);

	FILE *file = fopen(name, "r");

	if(file == NULL){
		printf("We cannot read the given file.\n");
		exit(0);
	}

	char buff[SIZE];
	while( fgets(buff, SIZE, file)){
		fputs(buff, stdout);
	}

	fclose(file);

	return 0;
}

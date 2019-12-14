#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* FILE CREATOR
* GIVE THE FILE NAMES AS A OPTIONAL PARAMETERS
* HOW MANY YOU WANT
*/

int main(int argc, char* argv[]){
	
	char name[20];

	for(int i = 1; i < argc; i++){
		strcpy(name, argv[i]);
		FILE *f = fopen(name,"a");
		fclose(f);
	}

	return 0;
}

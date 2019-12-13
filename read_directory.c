#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	DIR *dir;
	
	struct dirent *sd;

	dir = opendir(".");

	if(dir == NULL){
		printf("Unable to open the directory.");
		exit(1);
	}
	
	while((sd=readdir(dir)) != NULL){
		printf(">> %s\n",sd->d_name);
	}

	closedir(dir);
	return 0;
}

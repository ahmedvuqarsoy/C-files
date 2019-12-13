#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<string.h>

/*
 * ADDING THE DIRECTORY NAME AS A OPTIONAL ARGUMENT
*/

int main(int argc, char *argv[]){
	
	int ret;
	char name[20];
	strcpy(name,argv[1]);
	ret = mkdir(name, S_IRUSR | S_IRGRP | S_IROTH | S_IXUSR | S_IXGRP | S_IXOTH);



	return 0;
}

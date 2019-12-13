#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char* argv[]){
	int ret;
	char name[20];
	strcpy(name,argv[1]);
	ret = rmdir(name);
	return 0;
}

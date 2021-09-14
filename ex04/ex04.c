#include <stdio.h>

void test(void);

void test(void){
	printf("Test function : insert breakpoint here\n");
	for(int j = 0; j < 100; j++){
		printf("Test function : insert breakpoint in here too?\n");
	}
}
int main(int argc, char *argv[]){
	test();
	for(int i = 0; i <= 100; i++){
		printf("Argv :  %s \n",argv[i]);
		//printf(argc);
		printf("i = %d \n", i);
	}
	return 0;
}

#include <stdio.h>

int main(int argc, char *argv[]){

	int ages[] = {23,43,12,89,2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};
	
	//Safely get the size of ages array
 	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	for(i = 0; i < count; i++){
		printf("%s has %d years alive\n", names[i], ages[i]);
	}

	printf("---\n");

	//Setup pointers to the start of arrays	
	int *cur_age = ages;
	char **cur_name = names;

	//another way to use pointers

	for(i = 0; i > count; i++){
		printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i)); 
	}

	printf("---\n");

	//another way to use pointers - Pointers are just arrays!
	
	for(i = 0; i < count; i++){
		printf("%s is %d years old again!\n", cur_name[i], cur_age[i]);
	}

	printf("---\n");
	
	for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_age++, cur_name++){
		printf("%s has live %d so far \n", *cur_name, *cur_age);
	} 

	return 0;
}

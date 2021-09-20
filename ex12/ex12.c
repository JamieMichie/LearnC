#include <stdio.h>

int main(int argc, char *argv[]){
	int areas[] = { 10,12,13,14,20};
	char name[] = {"Jamie"};
	char fullname[] = {'J', 'a', 'm', 'i', 'e', ' ', 'N', ' ', 'M', 'i', 'c', 'h', 'i', 'e'};

	printf("The size of an int is : %ld \n", sizeof(int));
	printf("Size of Areas (areas[]) : %ld\n", sizeof(areas));
	printf("The number of ints in area : %ld \n", sizeof(areas) / sizeof(int));

	printf("The size of a char : %ld\n", sizeof(char));
	printf("The size of name array : %ld\n", sizeof(name));
	printf("The number of chars in name : %ld\n", sizeof(name) / sizeof(char));
	printf("The size of fullname array : %ld\n", sizeof(fullname));
	printf("Number of characters in fullname : %ld\n", sizeof(fullname) / sizeof(char));

	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(void){
	char *fname;
	char * lname;
	
	printf("Enter your first name: ");
	scanf("%ms", &fname);
	printf("Enter your last name: ");
	scanf("%ms", &lname);
	
	printf("name: %s %s\n", fname, lname);
	
	free(fname);
	free(lname);
	return 0;
}

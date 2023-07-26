#include <stdio.h>

int main (int argc , char *argv[])
{
	int number[4] = {0}; 
	char str[4]= {'a'}; 
	char *name = "Mum"; 

	printf ("%d , %d , %d , %d \n", number[0], number[1], number[2], number[3]); 
	printf ("%c ,%c ,%c , %c \n ",str[0], str[1], str[2], str[3]); 

	printf("name = %s \n" *name); 

	return 0 ; 
}

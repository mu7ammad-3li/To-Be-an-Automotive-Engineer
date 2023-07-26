#include <stdio.h>

int main (int argc , char *argv [])
{
	int areas[] = {10 , 11, 12, 13, 14 ,20 }; 
	char name [] = "Zed"; 
	char full_name []  = {
		'z' ,'e', 'd',' ', 'A', 
		'.', 's','h', 'a','w', '\0'};
	printf ("Size of an int %ld \n ", sizeof(int)); 
	printf ("Size of Areas (int []) %ld \n ", sizeof(areas)); 
	printf ("Size of name  (char []) %ld \n", sizeof(name)); 
	printf ("size of Full name %ld\n ", sizeof (name)); 
	
	return 0 ; 
	}

		

#include <stdio.h> 

int main (int argc , char *argv [])
{ 
	int i = 0 ; 
	for (i = 0 ; i<argc ;  i++) 
	{
		printf (" Argc %d %s\n ", i , argv[i]); 
	}
	char *state [] ={
		"California" , "oregon" , "texas" 
	}; 
	int states_num = 3 ; 
	for (i = 0 ; i<states_num ; i++)
	{
		printf ("State %d: %s \n~", i , state[i]); 
	}
	return 0 ; 
}

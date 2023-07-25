#include <stdio.h>


int main (int argc , char *argv[])
{
	int i = 0 ; 
	if (argc == 1 ){
		printf ("You have only one argument\n"); 
	} else if (argc >1 && argc < 4 ){
		printf ("here is your Arguments :\n") ; 

		for (i = 0 ; i <argc ; i++)
		{
			printf ("%s ",argv[i]); 
		}
		printf ("\n"); 
	} else {
		printf ("You have Too many Arguments \n");
	}
	return 0 ; 
}


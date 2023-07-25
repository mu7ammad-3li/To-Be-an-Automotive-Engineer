#include <stdio.h> 

int main (int argc , char *argv[])
{
	if (argc !=2 ) { 
		printf ("You must have One argument \n"); 
		return 1 ; 
	}
	int i = 0 ; 
	for (i = 0 ; argv[1][i]!='\0'; i ++)
	{
		char Letter = argv[1][i]; 
		switch (Letter)
		{
			case 'a':
			case 'A': 
				printf ("%d: 'A'\n" , i ); 
				break; 
			case 'E': 
			case 'e': 
				printf ("%d : 'E'\n ", i ); 
				break; 
			case 'i': 
			case 'I':
				printf ("%d : 'I'\n ",i); 
				break;
			case 'O': 
			case 'o': 
				printf ("%d : 'O'\n ",i); 
				break; 
			case 'U': 
			case 'u': 
				printf("%d : 'U'\n" ,i);
				break; 
			case 'y': 
			case 'Y': 
				printf ("%d : 'Y'\n ",i);
				break; 
			default: 
				printf ("%d : %c Not a Vowl\n", i ,Letter );
		};

		
	}
	return 0 ;
}
				


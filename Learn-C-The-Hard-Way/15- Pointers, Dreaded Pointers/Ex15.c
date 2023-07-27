#include <stdio.h>

int main (int argc , char *argv[])
{
    int ages [] = {23 ,24, 25, 26,27}; 
    char *names [] = {
        "Alan", "frank" ,"mary" ,
        "lisa" , "jhon"}; 
    int count = sizeof (ages) /sizeof(int) ; 
    int i = 0 ; 
    for (i = 0 ; i<count ; i++)
    {
        printf ("%s has %d Years Alive \n ",names[i], ages[i]);
    }
    printf ("--------\n"); 
    
    int *cur_age = ages ; 
    char **cur_name = names ; 
    
    for (i = 0 ;  i <count ;i++) { 
    printf ("%s is %d Years old .\n ",
          *(cur_name +i ), *(cur_age+i )); 

    printf ("_____________\n "); 
    }
    printf (" Cur_name = %p ",cur_name);
    printf (" Cur_name = %p ",&names);
    printf (" Cur_name = %s ",*(cur_name+1));
    printf (" Cur_name = %s ",names[1]);
    return 0; 
    
}

#include <stdio.h>
#include <ctype.h>

int can_print_it(char c);
void print_letter(char arg[]);
void print_arguments(int argc, char *argv[])
{
    int i = 0;
    for (int i = 0; i < argc; i++)
    {
        print_letter(argv[i]);
    }
}
void print_letter(char arg[])
{
    int i = 0;
    for (i = 0; arg[i] != '\0'; i++)
    {
        char ch = arg[i];
        if (can_print_it(ch))
        {
            printf("%c == %d ", ch, ch);
        }
        printf("\n");
    }
}
int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

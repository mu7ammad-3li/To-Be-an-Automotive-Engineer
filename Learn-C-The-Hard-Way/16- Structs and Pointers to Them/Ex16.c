#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

struct person
{

    char *name;
    int age;
    int height;
    int weight;
};

struct person *person_create(char *name, int age, int height,
                             int weight)
{
    // This returns a struct of type person with arguments passed in thw difination
    struct person *who = malloc(sizeof(struct person));
    // dynamically allocate memory with size of (struct(person))
    assert(who != NULL);
    // prints a diagnostic message to stderr
    // and aborts the program if expression is false (zero).
    who->name = strdup(name);
    // strdup() is used to duplicate a string.
    // It returns a pointer to null-terminated byte string
    who->age = age;
    who->height = height;
    who->weight = weight;
    return who;
}
void person_distroy(struct person *who)
{
    assert(who != NULL);
    printf("Distroying %s \n", who->name);
    free(who->name);
    printf("name freed \n");
    printf("Distroying struct  \n");
    free(who);
    printf("Distroyed\n");
}

void person_print(struct person *who)
{
    printf("name: %s\n ", who->name);
    printf("age: %d\n", who->age);
    printf("weight: %d\n", who->weight);
    printf("height: %d\n", who->height);
}

int main(int argc, char *argv[])
{
    struct person *joe = person_create("joe", 22, 60, 150);
    person_print(joe);
    person_distroy(joe);
    return 0;
}

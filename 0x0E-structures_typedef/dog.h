#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure of a dog
 *@name: name of the dog
 *@age: his age
 *@owner: his owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);

#endif

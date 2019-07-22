#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a dog
 * @name: Name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Defines a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - gives dog details
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: this gives the name of the dog, age and owners name
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

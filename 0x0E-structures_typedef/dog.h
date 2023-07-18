#ifndef _DOG_H_
#define _DOG_H_

/**
 * Struct dog - Basic infor of a Dog
 * @name: The dog's name
 * @age : The age of the dog
 * @owner : The name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif


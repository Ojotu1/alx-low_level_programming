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

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif


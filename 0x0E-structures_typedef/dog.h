#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Short description
 * @name: First member type char
 * @age: Second member type float
 * @owner: Third member type char
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

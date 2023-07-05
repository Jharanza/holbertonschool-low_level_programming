#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Attributes for dog strutct
 *
 * @name: Pointer to a char variable
 *
 * @owner: 2do pointer to another char variable
 *
 * @age: Variable type float
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct
 *
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif


#ifndef DOG
#define DOG

/**
 * struct - structure of type dog
 * @name: pointer to name of dog
 *
 * @age: age of dog
 * @owner: pointer to the owners name
 *
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

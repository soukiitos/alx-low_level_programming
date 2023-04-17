#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The informations of the dog
 * dog_t - The typedef of struct dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The name of the dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif

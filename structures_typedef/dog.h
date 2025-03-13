#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Defines a dog's basic information.
 * @name: First member - dog's name.
 * @age: Second member - dog's age.
 * @owner: Third member - owner's name.
 *
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

#endif /* DOG_H */

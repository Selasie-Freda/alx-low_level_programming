#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - used to define a new structure
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif

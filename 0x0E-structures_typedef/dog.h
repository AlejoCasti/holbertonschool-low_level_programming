#ifndef doggy
#define doggy
/**
 * struct dog - Dog stuct
 * @name: variable char type
 * @age: variable float type
 * @owner: variable char type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

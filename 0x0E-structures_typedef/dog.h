#ifndef DOG_H
#define DOG_H
/**
* struct dog - struct of dogs.
* @name : names of the dogs (char).
* @age : ages of the dogs (float).
* @owner : names of the dogs owners (char).
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct
{
char *name;
float age;
char *owner;
}dog_t;
#endif

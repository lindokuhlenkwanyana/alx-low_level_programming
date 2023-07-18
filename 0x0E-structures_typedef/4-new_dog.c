#include <stdlib.h>
#include "dog.h"
#include <stdio.h>


/**
 * new_dog - creating a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
printf("Unable to allocate memory for dog");
return (NULL);
}
dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}

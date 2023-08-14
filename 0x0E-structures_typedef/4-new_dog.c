#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog_t - Structure for storing dog information
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner
 *
 * Description: This structure holds information about a dog.
 */
typedef struct dog_t {
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * new_dog - Creates a new dog with the given information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);

    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->owner, owner);

    new_dog->age = age;
    return (new dog);
}

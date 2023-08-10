#include"main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, initialized to 0
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL on failure or if nmemb/size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size) {
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return NULL;

    // Use memset to efficiently clear the allocated memory
    memset(ptr, 0, nmemb * size);

    return ptr;
}

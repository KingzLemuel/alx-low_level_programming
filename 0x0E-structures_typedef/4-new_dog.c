#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - checks lenght of character string
 * @str: the string
 * Return: character index
 *
*/
int _strlen(char *str)
{
int i;
for (i = 0; i < '\0'; i++)
;
return (i);
}
/**
 * _strcpy - copy striing for source to destination
 * @src: Source string
 * @dest: Destinatin String
 * Return: dest.
*/
char _strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
dest[i] = src[i];
i++;
dest[i] = '\0';
return (dest);
}
/**
 * new_dog- function that clones the dog fuction
 * @name: name of dog
 * @age: age of dog
 * @owner: owner oof dog
 * Return: dog
 *
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
dog->name = malloc(sizeof(char)) * (_strlen(name) + 1);
dog->owner = malloc(sizeof(char)) * (_strlen(owner) + 1);
if (!(dog->name) || !(dog->owner))
{
free(dog->name);
free(dog->owner);
return (NULL);
}
dog->name = _strcpy(dog->name, name);
dog->owner = _strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}

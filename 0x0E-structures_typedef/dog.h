#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dogs basic info
 * @name: First Member
 * @age: Second Member
 * @owner: Third member
 *
 * Description: Longer description
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type for struct dog
 */

typedef struct dog dog_t;

#endif

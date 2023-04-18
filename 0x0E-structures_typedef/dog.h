#ifndef DOD_H
#define DOD_H

/**
	 * struct dog - a dog's basic info
         * @name: First member (name of the dog)
	 * @age: Second member (age of the dog)
	 * @owner: Third member (the owner of the dog)
	 * Description: Longer description (any other info)
 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};


	/**
	 * dog_t - typedef for struct dog
	 */
	typedef struct dog dog_t;


	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);

#endif

#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* _strlen - finds the length of a string
* @str: string to find the length of
*
* Return: length of string
*/
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
* add_node - add a new node at beginning of a list_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}

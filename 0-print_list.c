#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list- Prints all the elements of
 * a list_t list
 * @h: Pointer to node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	int num = 0;

	while (tmp->next == NULL)
	{
		if (tmp->next == NULL)
		{
			if (tmp->str == NULL)
				printf("[0] (nil)\n");
			printf("[%d] ", tmp->len);
		}
		else
		{
			if (tmp->str == NULL)
				printf("[0] (nil)");
			printf("[%d] ", tmp->len);
			printf("%s\n", tmp->str);
			num++;
		}
		tmp = tmp->next;
	}
	printf("%d", num);
	return (num);
}
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}

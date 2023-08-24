# 0x12. C - Singly linked lists
## Task 0. Print list
Write a function that prints all the elements of a list_t list.
	_ Prototype: size_t print_list(const list_t *h);
	_ Return: the number of nodes
	_ If str is NULL, print [0] (nil)
	_ You are allowed to use printf
## Task 1. List length
Write a function that returns the number of elements in a linked list_t list.
	_ Prototype: size_t list_len(const list_t *h);
## Task 2. Add node
Write a function that adds a new node at the beginning of a list_t list.
	_ Prototype: list_t *add_node(list_t **head, const char *str);
	_ Return: the address of the new element, or NULL if it failed
	_ str needs to be duplicated
	_ You are allowed to use strdup
## Task 3. Add node at the end
Write a function that adds a new node at the end of a list_t list.
	_ Prototype: list_t *add_node_end(list_t **head, const char *str);
	_ Return: the address of the new element, or NULL if it failed
	_ str needs to be duplicated
	_ You are allowed to use strdup
## Task 4. Free list
Write a function that frees a list_t list.
	_ Prototype: void free_list(list_t *head);


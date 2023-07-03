# 0x12. C - More singly linked lists

## Tasks


### [0-print_listint.c](./0-print_listint.c)

This task have to create a function that will print all the contents of a listint_t
type list.

* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* Format: see example

### [1-listint_len.c](./1-listint_len.c)

This task have to create a function that return the length of a listint_t
type list.

* Prototype: `size_t listint_len(const listint_t *h);`

### [2-add_nodeint.c](./2-add_nodeint.c)

This task have to create a function that add a new node to the `head` of a list.

* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

### [3-add_nodeint_end.c](./3-add_nodeint_end.c)

This task have to create a function that add a new node to the `end` of a list.

* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

### [4-free_listint.c](./4-free_listint.c)

This task have to free all nodes in a list.

* Prototype: `void free_listint(listint_t *head);`

### [5-free_listint2.c](./5-free_listint2.c)

This task create a function that free all the node and set the `head` to `NULL`

* Prototype: `void free_listint2(listint_t **head);`
* The function sets the `head` to `NULL`

### [6-pop_listint.c](./6-pop_listint.c)

This task have to create a function delete the first node of a list and returns the value of that node.

* Prototype: `int pop_listint(listint_t **head);`
* if the linked list is empty return 0

### [7-get_nodeint.c](./7-get_nodeint.c)

This task have to create a function that returns a pointer to nth node in a list.

* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
* where `index` is the index of the node, starting at `0`
* if the node does not exist, return `NULL`

### [8-sum_listint.c](./8-sum_listint.c)

This task have to create a function that sum up all the values of a list.

* Prototype: `int sum_listint(listint_t *head);`
* if the list is empty, return `0`

### [9-insert_nodeint.c](./9-insert_nodeint.c)

This task have to create a function that will insert a new node into a given position.

* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

### [10-delete_nodeint.c](./10-delete_nodeint.c)

This task have to create a function that will delete a node at a given index.

* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed

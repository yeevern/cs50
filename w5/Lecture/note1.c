typedef struct node
{
    int number;
    struct node *next;
}
node;
// We can build a linked list in code starting with our struct. First, we’ll want to remember an empty list, so we can use the null pointer:
node *list = NULL;
// We use sizeof(node) to get the right amount of memory to allocate, and
// malloc returns a pointer that we save as n
node *n = malloc(sizeof(node));  // malloc always return an addr

// We want to make sure malloc succeeded in getting memory for us
if (n != NULL)
{
    // This is equivalent to (*n).number, where we first go to the node pointed
    // to by n, and then set the number property. In C, we can also use this
    // arrow notation
    // can also write (*n).number which is go to tat addr and go to the var call num
    n->number = 1;  // you start at the address, and then you go to number and set it to 1
    // Then we need to make sure the pointer to the next node in our list
    // isn't a garbage value, but the new node won't point to anything (for now)
    n->next = NULL;  // NULL just means this is the end of the list
}
// Now our list needs to point to this node:
list = n;

// To add to the list, we’ll create a new node the same way by allocating more memory:
n = malloc(sizeof(node));
if (n != NULL)
{
    n->number = 2;
    n->next = NULL;
}
// But now we need to update the pointer in our first node to point to our new n:
list->next = n;

n = malloc(sizeof(node));
if (n != NULL)
{
    n->number = 3;
    n->next = NULL;
}
list->next->next = n;
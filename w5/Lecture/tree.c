#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Represent a node
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
    // Tree of size 0
    node *tree = NULL;

    // Add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)  // safety check
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    // Add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

    // Add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n->number = 3;
    n->left = NULL;            //      2
    n->right = NULL;           //    /
    tree->right = n;           //   1     3

    // Print tree
    print_tree(tree);

    // Free tree
    free_tree(tree);
    return 0;
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}

// To free the memory for each of the nodes in our tree, we’ll have to recursively free both children first:
void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_tree(root->left);  // only free the addr
    free_tree(root->right);
    free(root);  // need to free last
}

// We can also search our tree with an implementation of binary search:
bool search(node *tree, int number)  // give me a tree and a num that I'm looking for
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    // else if (number == tree->number)  // The last conditional can be simplified to else, since there’s no other case possible. (line 107)
    // {
    //     return true;
    // }
    else
    {
        return true;
    }
}
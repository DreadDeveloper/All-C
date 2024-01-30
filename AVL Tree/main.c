#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};
int max(int a, int b);
int height(struct node *N)
{
    if(N == NULL)
        return 0;
    return N -> height;
}
int max(int a, int b)
{
    return(a > b) ? a : b;
}
struct node *newnode(int key)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node -> key = key;
    node -> left = NULL;
    node -> right = NULL;
    node -> height = 1;
    return (node);
}
struct node *rightRotate(struct node *y)
{
    struct node *x = y -> left;
    struct node *temp = x -> right;
    x -> right = y;
    y -> left = temp;
    y -> height = max(height(y -> left), height(y -> right)) + 1;
    x -> height = max(height(x -> left), height(x -> right)) + 1;
    return x;
}
struct node *leftRotate(struct node *x)
{
    struct node *y = x -> right;
    struct node *temp = y -> left;
    y -> left = x;
    x -> right = temp;
    x -> height = max(height(x -> left), height(x -> right)) + 1;
    y -> height = max(height(y -> left), height(y -> right)) + 1;
    return y;
}
int getBalance(struct node *N)
{
    if(N == NULL)
        return 0;
    return height(N -> left) - height(N -> right);
}
struct node *insertnode(struct node *node, int key)
{
    if(node == NULL)
    {
        return (newnode(key));
    }
    if(key < node -> key)
        node -> left = insertnode(node -> left, key);
    else if(key > node -> key)
        node -> right = insertnode(node -> right, key);
    else
        return node;
    node -> height = 1 + max(height(node -> left),height(node -> right));
    int balance = getBalance(node);
    if(balance > 1 && key < node -> left -> key)
        return rightRotate(node);
    if(balance < -1 && key > node -> right -> key)
        return leftRotate(node);
    if(balance > 1 && key > node -> left -> key)
    {
        node -> left = leftRotate(node -> left);
        return rightRotate(node);
    }
    if(balance < -1 && key < node -> right -> key)
    {
        node -> right = rightRotate(node -> right);
        return leftRotate(node);
    }
    return node;
}
struct node *minValuenode(struct node *node)
{
    struct node *current = node;
    while (current -> left != NULL)
        current = current -> left;
    return current;
}
struct node *deletenode(struct node *root, int key)
{
    if(root == NULL)
        return root;
    if(key < root -> key)
        root -> left = deletenode(root -> left, key);
    else if(key > root -> key)
        root -> right = deletenode(root -> right, key);
    else
    {
        if((root -> left == NULL) || (root -> right == NULL))
        {
            struct node *temp = root -> left ? root -> left : root -> right;
            if(temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else
                *root = *temp;
            free(temp);
        }
        else
        {
            struct node *temp = minValuenode(root -> right);
            root -> key = temp -> key;
            root -> right = deletenode(root -> right, temp -> key);
        }
    }
    if(root == NULL)
        return root;
    root -> height = 1 + max(height(root -> left), height(root -> right));
    int balance = getBalance(root);
    if(balance > 1 && getBalance(root -> left) >= 0)
        return rightRotate(root);
    if(balance > 1 && getBalance(root -> left) < 0)
    {
        root -> left = leftRotate(root -> left);
        return rightRotate(root);
    }
    if(balance < -1 && getBalance(root -> right) <= 0)
        return leftRotate(root);
    if(balance < -1 && getBalance(root -> right) > 0)
    {
        root -> right = rightRotate(root -> right);
        return leftRotate(root);
    }
    return root;
}
void printPreOrder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ", root -> key);
        printPreOrder(root -> left);
        printPreOrder(root -> right);
    }
}
int main()
{
    struct node *root = NULL;
    int choice = 0, n = 0;
    while(1)
    {
        system("cls");
        printf("\n1.Insert into tree\n2.Delete from tree\n3.Display using pre-order traversal\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter the value to be inserted: ");
                scanf("%d", &n);
                root = insertnode(root, n);
                getch();
                break;
            case 2:
                printf("\nEnter the value to be deleted: ");
                scanf("%d", &n);
                root = deletenode(root, n);
                getch();
                break;
            case 3:
                printPreOrder(root);
                getch();
                break;
            case 4:
                exit(0);
            default:
                printf("\nIncorrect choice.");
                getch();
        }
    }
    return 0;
}

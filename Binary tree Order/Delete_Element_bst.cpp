#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *create_node(int item)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void add_left_child(struct node *node, struct node *child)
{
    node->left = child;
}
void add_right_child(struct node *node, struct node *child)
{
    node->right = child;
}

struct node *insert_bst(struct node *root, struct node *node)
{
    struct node *parent;
    struct node *current = root;
    while (current != NULL)
    {
        parent = current;
        if (node->data < current->data)
            current = current->left;
        else
            current = current->right;
    }
    if (node->data < parent->data)
        add_left_child(parent, node);
    else
        add_right_child(parent, node);
    return root;
}

struct node *create_bst()
{
    struct node *root;
    struct node *node;
    root = create_node(10);
    int a[] = {1, 4, 8, 23, 78, 3, 7, 8};
    for (int i = 0; i < 8; i++)
    {
        node = create_node(a[i]);
        root = insert_bst(root, node);
    }
    return root;
}

struct node *minimum_bst(struct node *root)
{
    struct node *node = root;
    while (node->left != NULL)
    {
        node = node->left;
    }
    return node;
}

struct node *search_bst(struct node *root, int item)
{
    struct node *node = root;
    while (node != NULL)
    {
        if (node->data == item)
            return node;
        else if (item < node->data)
            node = node->left;
        else
            node = node->right;
    }
    return node;
}

struct node *delete_bst(struct node *currentnode, int value)
{
    if (currentnode == NULL) // enpty tree
        return NULL;
    else if (value < currentnode->data) // value is less than node's number. so go to left subtree
        currentnode->left = delete_bst(currentnode->left, value);
    else if (value > currentnode->data) // value is greater than node's number. so go to right subtree
        currentnode->right = delete_bst(currentnode->right, value);
    else
    {
        // node has no child
        if (currentnode->left == NULL && currentnode->right == NULL)
            currentnode = NULL;
        else if (currentnode->left == NULL) // node has only right child
            currentnode = currentnode->right;
        else if (currentnode->right == NULL) // node has only left child
            currentnode = currentnode->left;
        else
        { // node has two child,, we can find right minimun or successor
            struct node *tempnode = minimum_bst(currentnode->right);
            currentnode->data = tempnode->data;
            currentnode->right = delete_bst(currentnode->right, tempnode->data);
        }
    }
    return currentnode;
}

void print_IN_order(struct node *node)
{
    if (node != NULL)
    {
        if (node->left != NULL)
            print_IN_order(node->left);
        cout << node->data << " ";
        if (node->right != NULL)
            print_IN_order(node->right);
    }
}

int main()
{
    struct node *root = create_bst();
    struct node *node;
    cout << "BST: " ;
    print_IN_order(root);
    cout << endl;

    node = search_bst(root, 1);
    if (node != NULL)
    {
        cout << "Will delete ";
        cout << node->data << endl;
        root = delete_bst(root, 1);
        cout << "BST is :";
        print_IN_order(root);
        cout << endl;
    }
    else
        cout << "node not found!!" << endl;
 
    //another test case
    node = search_bst(root, 2);
    if (node != NULL)
    {
        cout << "Will delete ";
        cout << node->data << endl;
        root = delete_bst(root, 2);
        cout << "BST is :";
        print_IN_order(root);
        cout << endl;
    }
    else
        cout << "node not found!!" << endl;
     
     //another test case
    node = search_bst(root, 8);
    if (node != NULL)
    {
        cout << "Will delete ";
        cout << node->data << endl;
        root = delete_bst(root, 8);
        cout << "BST is :";
        print_IN_order(root);
        cout << endl;
    }
    else
        cout << "node not found!!" << endl;
    
    //another test case
   node = search_bst(root, 10);
    if (node != NULL)
    {
        cout << "Will delete ";
        cout << node->data << endl;
        root = delete_bst(root, 10);
        cout << "BST is :";
        print_IN_order(root);
        cout << endl;
    }
    else
        cout << "node not found!!" << endl;
    
}
/*
output------>
  BST: 1 3 4 7 8 8 10 23 78 
Will delete 1
BST is :3 4 7 8 8 10 23 78 
node not found!!
Will delete 8
BST is :3 4 7 8 10 23 78 
Will delete 10
BST is :3 4 7 8 23 78
  */

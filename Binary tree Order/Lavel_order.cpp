//lavel order------->

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int item){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;
}

void add_left_child(struct node *node, struct node *child){
    node->left=child;
}

void add_right_child(struct node *node, struct node *child){
    node->right=child;
}

struct node *create_tree(){
    
    struct node *two =create_node(2);
    struct node *seven= create_node(7);
    struct node *nine=create_node(9);
    add_left_child(two,seven);
    add_right_child(two, nine);

    struct node *one= create_node(1);
    struct node *six=create_node(6);
    add_left_child(seven,one);
    add_right_child(seven, six);

    struct node *five= create_node(5);
    struct node *ten=create_node(10);
    add_left_child(six, five);
    add_right_child(six, ten);

     struct node *eight= create_node(8);
     add_right_child(nine,eight);

    struct node *three= create_node(3);
    struct node *four=create_node(4);
    add_left_child(eight, three);
    add_right_child(eight,four);

    return two;
}
void print_Lavel_order(struct node *node){
    if(node==NULL)
    return;

    queue<struct node*>q;
    q.push(node);
    while(!q.empty()){
        struct node *current= q.front();
        q.pop();

        cout<<current->data<<" ";
        if(current->left!=NULL)
        q.push(current->left);


        if(current->right!=NULL)
        q.push(current->right);
    }
}


int main(){
    struct node *root=create_tree();
    cout<<"print all element: ";
    print_Lavel_order(root);
}

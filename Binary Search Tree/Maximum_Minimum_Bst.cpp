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

struct node *insert_bst(struct node *root, struct node *node){
    struct node *current_node=root;
    struct node *parent_node=NULL;
    while(current_node!=NULL){
        parent_node=current_node;
        if(node->data<current_node->data)
          current_node=current_node->left;
        else
        current_node=current_node->right;
    }
    if(node->data<parent_node->data)
    add_left_child(parent_node,node);
    else
    add_right_child(parent_node,node);
    
    return root;
}

struct node *create_bst(){
    struct node *root;
    struct node *node;
    root=create_node(10);
    int a[]={5,17,3,7,12,19,1,4 };
    for(int i=0;i<8;i++){
     node=create_node(a[i]);
     root=insert_bst(root,node);
    }
    return root;
    
}

void print_IN_order(struct node *node){
    if(node!=NULL){
        if(node->left!=NULL){
            print_IN_order(node->left);
        }
        cout<<node->data<<" ";
        if(node->right!=NULL){
            print_IN_order(node->right);
        }
    }
}

//minimum
struct node *minimum_bst(struct node *root){
   struct node *node=root;
   while(node->left!=NULL){
    node=node->left;
   }
   return node;
}

//maximum
struct node *maximum_bst(struct node *root){
   struct node *node=root;
   while(node->right!=NULL){
    node=node->right;
   }
   return node;
}

int main(){
    struct node *root=create_bst();
    print_IN_order(root);

    cout<<endl;
    //minimum
    cout<<"minimum number is : ";
    cout<<minimum_bst(root)->data<<endl;
     //maximum
    cout<<"maximum number is : ";
    cout<<maximum_bst(root)->data<<endl;
}

//output
/*
1 3 4 5 7 10 12 17 19 
minimum number is : 1
maximum number is : 19
*/

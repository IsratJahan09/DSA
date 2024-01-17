#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
  //  struct node *parents;


};

struct node *create_node(int item){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;
  //  new_node->parents=NULL;
    return new_node;
}

void add_left_child(struct node *node, struct node *child){
    node->left=child;
    // if(child!=NULL){
    //     child->parents=node;
    // }
}

void add_right_child(struct node *node, struct node *chaild){
    node->right=chaild;
    // if(chaild!=NULL){
    //     chaild->parents=node;
    // }
}

struct node *bst_insert(struct node *root, struct node *node){
   struct node *parent_node, *current_node;
   if(root==NULL){
    root=node;
    return root;
   }
   parent_node=NULL;
   current_node=root;
   while(current_node!=NULL){
    parent_node=current_node;

    if(node->data<current_node->data){
        current_node=current_node->left;
    }
    else{
        current_node=current_node->right;
    }

   }
   if(node->data<parent_node->data){
    add_left_child(parent_node, node);
   }
   else{
    add_right_child(parent_node, node);
   }
   return root;
}

struct node *create_bst(){
    struct node *root;
    struct node *node;
     root =create_node(10);  //(use it when, (insert function root==NULL dont create))
    int a[]={5,17,3,5,12,1,4};
    for(int i=0; i<7;i++){
        node=create_node(a[i]);
        root=bst_insert(root,node);
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

int main(){
   struct node *root=create_bst();
   print_IN_order(root);
}

/*
outpur
1 3 4 5 5 10 12 17
*/

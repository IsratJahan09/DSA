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

void add_right_child(struct node *node , struct node *child){
    node->right=child;
}

struct node *insert_bst(struct node *root, struct node *node){

    // if(root==NULL){       //base case , first root node,lavel-0;
    //     root=node;
    //     return root;
    // }

    struct node *parent_node =NULL;
    struct node *current_node = root;

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
        add_left_child(parent_node,node);
    }
    else{
        add_right_child(parent_node,node);
    }
    return root;

}

struct node *create_bst(){
    struct node *node;
    struct node *root;
    //firstly create a root node,base case
    root=create_node(10);
    cout<<"enter the number: ";
    int n; cin>>n;
    int a[n];
     cout<<" enter the array of n length: ";
     for(int i=0;i<n;i++){
        cin>>a[i];
        node=create_node(a[i]);
        root=insert_bst(root, node);
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

//search function
struct node *search_bst(struct node *root, int item){
    struct node *node=root;
    while(node!=NULL){
        if(node->data==item)
        return node;
        else if(item<node->data)
        node=node->left;
        else
        node=node->right;
    }
    return node;
}

int main(){
   struct node *root=create_bst();
   print_IN_order(root);

   //search 
   cout<<endl;
   cout<<"how many number you search? enter this: ";
    int n; cin>>n;
    while(n--){
    cout<<"enter the item: ";
    int item;cin>>item;
   struct node *node= search_bst(root,item);
   if(node!=NULL)
   cout<<"node is : "<<node->data<<endl;
   else
    cout<<"node not found"<<endl;
    }
   return 0;
}

/*
output------>
..............
enter the number: 5
 enter the array of n length: 6 3 89 56 9
3 6 9 10 56 89 
how many number you search? enter this: 2
enter the item: 56
node is : 56
enter the item: 67
node not found
*/

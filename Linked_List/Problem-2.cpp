//many node combination 
#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node*next; 
  
};


int main(){
    //address hold
   struct Node *a=NULL; //a=head
   struct Node *b=NULL;
   struct Node *c=NULL;
//dynamic memory allocation
   a=(struct Node*)malloc(sizeof(struct Node));
   b=(struct Node*)malloc(sizeof(struct Node));
   c=(struct Node*)malloc(sizeof(struct Node));

//data part
   a->data=4;
   b->data=34;
   c->data=36;

//link part
   a->next=b;
   b->next=c;
   c->next=NULL;
//print part or traverse a linked list
   while(a!=NULL){
    cout<<(a->data)<<endl;
    a=a->next;
   }

return 0;
}

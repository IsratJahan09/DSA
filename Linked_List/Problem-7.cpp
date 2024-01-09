#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node*Creatlinkedlist(int a[] ,int n){
    struct node *head=NULL;
    struct node *temp=NULL;
    struct node *current=NULL;
     for(int i=0;i<n;i++){
         temp=(struct node*)malloc(sizeof(struct node));
         temp->data=a[i];
         temp->next=NULL;
         if(head==NULL){
            head=temp;
            current=head;
         }
         else{
            current->next=temp;
            current=current->next;
         }
     }
   return head;
}

struct node *Middleinsert(struct node *head, int value, int position){
    struct node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==position){
          //insert your node here;
          struct node *new_node =(struct node*)malloc(sizeof(struct node));
          new_node->data=value;
          new_node->next=temp->next;
          temp->next=new_node;
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    struct node *head=Creatlinkedlist(a, n);
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<(ptr->data)<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;

    //middel insert;
    int value,position;
    cin>>value>>position;
    struct node *Middle=Middleinsert(head, value, position);
    struct node *middle=Middle;
    while(middle!=NULL){
        cout<<(middle->data)<<"->";
        middle=middle->next;
    }
    cout<<"NULL"<<endl;

    return 0;
    
    
}

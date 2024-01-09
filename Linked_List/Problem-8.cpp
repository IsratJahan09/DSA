#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
//create linked list
struct node *createlinkedlist(int a[], int n){
    struct node *head=NULL;
    struct node *temp=NULL;
    struct node *current =NULL;
    for(int i=0;i<n;i++){
        temp = (struct node*)malloc(sizeof(struct node));
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

//remove node 
struct node *removenode(struct node *head, int value){
    struct node *dumyhead=(struct node*)malloc(sizeof(struct node));
    dumyhead->next=head;
    struct node *temp=dumyhead;
   
    while(temp->next!=NULL){
        if(temp->next->data==value){
            temp->next=temp->next->next;
           // break;  //if your code does not profer output then u use break;
        }
        else{
            temp=temp->next;
        }
    }
    return dumyhead->next;
}

int main(){
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];

struct node *head=createlinkedlist(a,n);
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
       ptr=ptr->next;
    }
    cout<<"NULL"<<endl;

      int value; cin>>value;
    struct node *delete1=removenode(head , value);
    struct node *delation=delete1;
     while(delation!=NULL){
        cout<<(delation->data)<<"->";
        delation=delation->next;
     }
     cout<<"NUll"<<endl;
     return 0;
}

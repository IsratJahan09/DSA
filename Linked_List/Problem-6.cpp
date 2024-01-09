#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
//create linked list
struct node *createlinkedlist(int a[],int n){
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

//insert at begin function
struct node *begininsert(struct node *head, int value){
    struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=head;
    head=temp;
    return head;
}

//insert at last function
struct node *lastinsert(struct node *head,int value){
    struct node *current =head;
    //traverse to the last node
    while(current->next!=NULL){
        current=current->next;
    }
    //create new node and add to the list end
    struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=NULL;
    //insert
    current->next=temp;
    // head=current;
   
 return head;  //return head because head doese not change
     
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

    //beginig insert
    int value;
    cin>>value;
    struct node *insertbegin=begininsert(head ,value);
    struct node *insertb=insertbegin;
    //head=insertbegin
    while(insertb!=NULL){
        cout<<insertb->data<<"->";
        insertb=insertb->next;
    }
    cout<<"NULL"<<endl;
    
    //insert at last 
     head=insertbegin;
    int value1; cin>>value1;
    struct node *insertlast=lastinsert(head,value1);
    struct node *insertl=insertlast;
    //head=insertbegin
    while(insertl!=NULL){
        cout<<(insertl->data)<<"->";
        insertl=insertl->next;
    }
    cout<<"NULL"<<endl;

// head =insertlast
    return 0;
}

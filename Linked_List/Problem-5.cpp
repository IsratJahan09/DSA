#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
//create linked list
struct node *creatlinkedlist(int a[], int n){
    struct node *head= NULL;
    struct node *temp =NULL;
    struct node *current =NULL;
    
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

struct node *reverselinkedlist(struct node *head ){
   struct  node *prev=NULL;
   struct  node *current= head;
   struct node *NEXT=NULL;
  while(current!=NULL){
     NEXT=current->next;  //store next node
     current->next=prev;  //reverse the link connection
     prev=current;
     current=NEXT;
  }
   return prev;
}
int main(){
    int n; cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     struct node *head=creatlinkedlist(a,n);

     struct node *ptr=head;
        while(ptr!=NULL){
            cout<<(ptr->data)<<" ";
            ptr=ptr->next;
        }
        cout<<"NULL"<<endl;

       struct node *reverse = reverselinkedlist(head);
     while(reverse!=NULL){
        cout<<(reverse->data)<<" ";
        reverse=reverse->next;
     }
     cout<<"NULL"<<endl;

     return 0;
}

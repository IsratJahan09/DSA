
#include<bits/stdc++.h>
using namespace std;
#typedef struct node Node;
struct node
{
    int data;
    Node *next;
};

int main(){
    Node*head =NULL;
    Node*second=NULL;
    Node*third=NULL;
  
  head =(Node*)malloc(sizeof(Node));
  second =(Node*)malloc(sizeof(Node));
  third = (Node*)malloc(sizeof(Node));

  head->data=2;
  head->next=second;

  second->data=3;
  second->next=third;
 
  third->data=6;
  third->next=NULL;

   //prtint your code using while loop 
}

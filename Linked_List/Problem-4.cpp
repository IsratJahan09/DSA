#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *createlinklist(int a[], int n) {
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *current = NULL;

    for (int i = 0; i < n; i++) {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = a[i];
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            current = head;
        }
        else {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

//for search function
int searchInLinklist(struct node *head, int value) {
    int index = 1;
    while (head != NULL) {
        if (head->data == value) {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    struct node *head = createlinklist(a, n);

    // Use a separate pointer for printing
    struct node *printPtr = head;
    while (printPtr != NULL) {
        cout << (printPtr->data) << " ";
        printPtr = printPtr->next;
    }
    cout << "NULL" << endl;

  //search
    int value;
    cin >> value;
    int indeex = searchInLinklist(head, value);
    cout << indeex << endl;
    return 0;
}

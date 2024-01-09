#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
//create
struct Node *createlinkedlist(int a[], int n) {
    struct Node *head = NULL;
    struct Node *teamp = NULL;
    struct Node *current = NULL;

    for (int i = 0; i < n; i++) {
        teamp = (struct Node *)malloc(sizeof(struct Node));
        teamp->data = a[i];
       teamp->next = NULL;
        if (head == NULL) {
            head = teamp;
            current = head;
        } else {
            current->next = teamp;
            current = current->next;
        }
    }
    return head;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    struct Node *head = createlinkedlist(a, n);

    while (head != NULL) {
        cout << (head->data) << endl;
        head = head->next;
    }
    cout << "NULL" << endl;

    return 0;
}

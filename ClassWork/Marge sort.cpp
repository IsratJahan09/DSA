#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

void merge(int a[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int l[n1], m[n2];
    for(int i = 0; i < n1; i++)
        l[i] = a[p + i];
    for(int j = 0; j < n2; j++)
        m[j] = a[q + j + 1];

    int i = 0, j = 0, k = p;

    while(i < n1 && j < n2) {
        if(l[i] <= m[j]) {
            a[k] = l[i];
            i++;
        } else {
            a[k] = m[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        a[k] = l[i];
        i++;
        k++;
    }
    while(j < n2) {
        a[k] = m[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int l, int r) {
    if(l < r) {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    merge_sort(a, 0, n - 1);
    printarray(a, n);
    return 0;
}

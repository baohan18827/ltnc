#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};

Node* taoNode (int x) {
    Node* p = new Node;
    p->data=x;
    p->next=NULL;
    return p;
}
void addLast (Node* &p, int x) {
    if (p==NULL) {
        p=taoNode(x);
    }
    else {
        Node* chay=p;
        while (chay->next!=NULL){
            chay=chay->next;
        }
        chay->next=taoNode(x);
    }
}
int mx (Node* &p) {
    Node* chay=p;
    int max=chay->data;
    while (chay!=NULL) {
        if (chay->data>max) {
            max=chay->data;
        }
        chay=chay->next;
    }
    return max;
}
int mn (Node* &p) {
    Node* chay=p;
    int min=chay->data;
    while (chay!=NULL) {
        if (chay->data<min) {
            min=chay->data;
        }
        chay=chay->next;
    }
    return min;
}
int main() {
    Node* p=NULL;
    int n;
    cin>>n;
    int x;
    for (int i = 1; i <= n; i++) {
        cin>>x;
        addLast(p,x);
    }
    cout<<mx(p)<<endl;
    int dem=1;
    while (dem<=n) {
        if (p->data==mx(p)) {
            cout<<dem<<" ";
        }
        dem++;
        p=p->next;
    }
    cout<<endl<<mn(p)<<endl;
    dem=1;
    while (dem<=n) {
        if (p->data==mn(p)) {
            cout<<dem<<" ";
        }
        dem++;
        p=p->next;
    }
}

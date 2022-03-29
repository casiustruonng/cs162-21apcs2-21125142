#include <bits/stdc++.h>
#include "function.h"
using namespace std;


void init(List &lst){
    lst.pHead = NULL;
}
Node* createNode(int x){
    Node *p = new Node;
    p->data = x;
    p->pNext = NULL;
    return p;
}

void Input(List&lst){
    Node *p = NULL;
    Node*cur = NULL;
    int x;
    while (true){
        cin >> x;
        p = createNode(x);
        if (lst.pHead == NULL){
            lst.pHead = p;
            cur = lst.pHead;
        }
        else{
            cur->pNext = p;
            cur = p;
        }
        if(x == 0){
            break;
        }
    }
}
void Input_list_into_file(List& lst){
    ofstream out;
    out.open("output.txt");
    Node*cur = lst.pHead;
    while (cur != NULL){
        out << cur->data << " ";
        cur = cur->pNext;
    };
    out.close();
}
void display(List& lst){
    Node*cur = lst.pHead;
    while (cur != NULL){
        cout << cur->data << " ";
        cur = cur->pNext;
    };
    cout << '\n';
}

void Join_two_lists(List &lst, List&lst1){
    Node *p1 = lst.pHead;
    Node *p2 = lst1.pHead;

    while (p1->pNext->data != 0){
        p1 = p1->pNext;
    }
    if (lst1.pHead != NULL){
        p1->pNext = p2;
    }
    lst1.pHead = NULL;
}
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *pNext;
};
struct List{
    Node *pHead;
};
void init(List &lst);
Node* createNode(int x);
void Input(List&lst);
void display(List& lst);
void Input_list_into_file(List& lst);
void Join_two_lists(List &lst, List&lst1);
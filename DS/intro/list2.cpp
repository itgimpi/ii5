#include <bits/stdc++.h>
using namespace std;
// linked list by hand, C++ way

struct node { // 12B
    int data; // 4B
    struct node * next; // 8B
};

int main() {
    struct node *head = nullptr;
    struct node *second = nullptr;
    struct node *third = nullptr;

    // CPP way
    //head = (struct *node) malloc (12);
    head = new node;
    second = new node;
    third = new node;
    // fali provera alokacije

    //(*head).data = 12;
    head->data = 12;
    head->next = second;
    
    second->data = 15;
    second->next = third;

    third->data = 32;
    third->next = nullptr;

    return 0; }
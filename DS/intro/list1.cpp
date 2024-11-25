#include <bits/stdc++.h>
using namespace std;
// linked list by hand, C way
// https://pythontutor.com/

struct node { // 12B
    int data; // 4B
    struct node * next; // 8B
};

int main() {
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // C way
    //head = (struct *node) malloc (12);
    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));

    //(*head).data = 12;
    head->data = 12;
    head->next = second;
    
    second->data = 15;
    second->next = third;

    third->data = 32;
    third->next = NULL;

    return 0; }
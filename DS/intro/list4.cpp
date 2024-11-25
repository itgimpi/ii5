#include <bits/stdc++.h>
using namespace std;
// linked list, C++ way
// using non-void function

struct node { // 12B
    int data; // 4B
    struct node * next; }; // 8B

node * dodaj(node * glava, int podatak) {
    node *novi = new node;

    novi->data = podatak;
    novi->next = glava;

    return novi; }

node * izbaci(node * glava) {
    if ( glava == nullptr ) return ; // BC, empty list
        node * tmp = glava;
        glava = glava->next;
        delete tmp;
        return glava;
     }

void ispis (node * n) {
    while ( n != nullptr) {// ko kraja liste...
        cout << n->data << ' ';
        n = n -> next;  }
    cout << endl;
}

int main() {
    node * head = nullptr;
    head = dodaj(head, 1); // dodaj vraca novi head
    ispis(head);
    head = dodaj(head, 2); // 
    ispis(head);
    head = dodaj(head, 3); // 
    ispis(head);

    head = izbaci(head); ispis(head);
    return 0; }
#include <bits/stdc++.h>
using namespace std;
// linked list, C++ way
// using global var.

struct node { // 12B
    int data; // 4B
    struct node * next; }; // 8B

node *head = nullptr;

void dodaj(int podatak) {
    node *novi = new node;

    novi->data = podatak;
    novi->next = head;

    head = novi; }

void izbaci() {
    if ( head == nullptr ) return ; // BC, empty list
        node * tmp = head;
        head = head->next;
        delete tmp;
        return;
     }

void ispis (node * n) {
    while ( n != nullptr) {// ko kraja liste...
        cout << n->data << ' ';
        n = n -> next;  }
    cout << endl;
}

int main() {

    dodaj(1); // dodaj vraca novi head
    ispis(head);
    dodaj(2); // 
    ispis(head);
    dodaj(3); // 
    ispis(head);

    izbaci(); ispis(head);
    return 0; }
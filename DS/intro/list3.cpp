#include <bits/stdc++.h>
using namespace std;
// linked list, C++ way
// 

struct node { // 12B
    int data; // 4B
    struct node * next; }; // 8B

void dodaj(node ** glava, int podatak) {
    node *novi = new node;

    novi->data = podatak;
    novi->next = *glava;

    *glava = novi; }

void izbaci(node ** glava) {
    if ( *glava == nullptr ) return; // BC, empty list
        node * tmp = *glava;
        *glava = (*glava)->next;
        delete tmp;
     }

void ispis (node * n) {
    while ( n != nullptr) {// ko kraja liste...
        cout << n->data << ' ';
        n = n -> next;  }
    cout << endl;
}

int main() {
    node * head = nullptr;
    dodaj(&head, 1); // zbog promene head-a
    ispis(head);
    dodaj(&head, 2); // zbog promene head-a
    ispis(head);
    dodaj(&head, 3); // zbog promene head-a
    ispis(head);

    izbaci(&head); ispis(head);
    return 0; }
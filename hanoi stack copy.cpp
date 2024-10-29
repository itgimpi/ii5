#include <iostream>
#include <stack>
using namespace std;

struct el { // element steka
    int type; // tip rekurzije, 0 je poziv, 1 je ispis
    int start, tmp, finish;
    int n; };

tuple<int, int, int, int, int>rek;

el call(int start, int tmp, int finish, int n) {
    el rez;
    rez.type = 0; // poziv
    rez.start = start; 
    rez.tmp = tmp; 
    rez.finish = finish; 
    rez.n = n;
    return rez;  }

el print(int start, int finish) {
    el rez;
    rez.type = 1; // ispis
    rez.start = start; 
    rez.finish = finish;
    return rez;     }

void hanoi(int n, int start, int tmp, int finish) {
    stack<el> s;
    s.push(call(start, tmp, finish, n)); // prvi poziv rek. f-je
    while (!s.empty()) { // dok ima el. na steku...
        el e = s.top(); s.pop();
        if (e.type == 0) { // Kog tipa je rekurzija? Poziv?
            if (e.n > 0) { // n>0
                s.push(call(e.tmp, e.start, e.finish, e.n - 1)); // poziv, ispis i poziv
                s.push(print(e.start, e.finish));
                s.push(call(e.start, e.finish, e.tmp, e.n - 1));  }  } 
        else if (e.type == 1) { // Ispis?
                cout << e.start << " " << e.finish << endl;  }  }  }

int main() {
    int n;     cin >> n;

    hanoi(n, 1, 2, 3);  }
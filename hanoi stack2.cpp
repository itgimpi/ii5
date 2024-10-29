#include <bits/stdc++.h>
using namespace std;
//get<0>(student0)
struct el { // element steka
    int type; // tip rekurzije, 0 je poziv, 1 je ispis
    int start, tmp, finish;
    int n; };

//tuple<int, int, int, int, int>rek;

tuple<int, int, int, int, int> poziv(int start, int tmp, int finish, int n) {
    tuple<int, int, int, int, int> res = {0, start, tmp, finish, n};
    //tuple<int, int, int, int, int> res = make_tuple (0, start, tmp, finish, n);
    return res;  }

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

tuple<int, int, int, int, int> ispis(int start, int tmp, int finish, int n) {
    tuple<int, int, int, int, int> res = {1, start, tmp, finish, n};
    return res;  }

void hanoi(int n, int start, int tmp, int finish) {
    //stack<el> s;
    stack<tuple<int, int, int, int, int>> s;
    s.push(poziv(start, tmp, finish, n)); // prvi poziv rek. f-je
    while (!s.empty()) { // dok ima el. na steku...
        tuple<int, int, int, int, int> e = s.top(); s.pop();
        int e0, e1, e2, e3, e4;
        tie (e0, e1, e2, e3, e4) = e;
        //get<0>(student0)
        if (e0 == 0) { // Kog tipa je rekurzija? Poziv?
        //if (e.type == 0) { // Kog tipa je rekurzija? Poziv?
            //if (e.n > 0) { // n>0
            if (e4 > 0) { // n>0
                //s.push(call(e.tmp, e.start, e.finish, e.n - 1)); // poziv, ispis i poziv
                s.push(poziv(e2, e1, e3, e4 - 1)); // poziv, ispis i poziv
                s.push(ispis(e1, e2, e3, e4));
                s.push(poziv(e1, e3, e2, e4 - 1));  }  } 
        else if (e0 == 1) { // Ispis?
                cout << e1 << " " << e2 << endl;  }  }  }

int main() {
    int n;     cin >> n;

    hanoi(n, 1, 2, 3);  }
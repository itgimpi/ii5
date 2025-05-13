#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int p; //broj predmeta
    cin >> p;

    vector<pair<int, int>> a(p); 
    for (int i = 0; i < p; ++i) {
        cin >> a[i].first >> a[i].second; //prvo se unosi tezina, pa onda vrednost
    }

    int v; //broj vreca
    cin >> v;

    vector<int> vrece(v);
    for (int i = 0; i < v; ++i) {
        cin >> vrece[i]; //unosi se nosivost svake vrece
    }

    
    sort(a.begin(), a.end()); //predmeti se sortiraju po tezini, pa onda po vrednosti
    
    sort(vrece.begin(), vrece.end()); //sortiraju se vrece

    int zbir = 0;
    int indeks = 0;
    
    priority_queue<int> pq;

    for (int i = 0; i < v; ++i) {
        int b = vrece[i];

        
        while (indeks < p && a[indeks].first <= b) { //dok indeks ne predje broj predmeta i tezina predmeta nije veca od nosivosti vrece
            pq.push(a[indeks].second); //dodaje se predmet u vrecu
            indeks++;
        }

        
        if (!pq.empty()) {
            zbir = zbir + pq.top(); //sabiraju se vrednosti predmeta iz vrece
            pq.pop();
        }
    }

    cout << zbir << '\n';

    return 0;
}
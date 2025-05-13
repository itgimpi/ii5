#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p; // учитава се број предмета

    vector<pair<int, int>> predmeti(p);
    for (int i = 0; i < p; i++){
        cin >> predmeti[i].first >> predmeti[i].second;  // за сваки предмет се учитава његова маса и вредност
    	};

    int v;
    cin >> v; // учитава се број врећа

    vector<int> vrece(v);
    for (int i = 0; i < v; i++){
        cin >> vrece[i];  // учитавају се носивости врећа
	};

    sort(predmeti.begin(), predmeti.end()); // сортирамо предмете по маси (најлакши иде први)
    sort(vrece.begin(), vrece.end());       // сортирамо вреће по носивости (најслабија иде прва)

    priority_queue<int> dostupne_vrednosti;
    int ukupna_vrednost = 0, j = 0;

    for (int i = 0; i < v; i++) {  // за сваку врећу, гледамо који предмети могу да стану у њу
        while (j < p && predmeti[j].first <= vrece[i]) {
            dostupne_vrednosti.push(predmeti[j].second);  // узимамо све предмете који могу да стану у одређену врећу
            j++;
        }
        if (!dostupne_vrednosti.empty()) {
            ukupna_vrednost += dostupne_vrednosti.top(); // узимамо највреднији предмет од њих и додајемо његову вредност у збир
            dostupne_vrednosti.pop();  // избацујемо тај предмет јер га не можемо поново користити
        }
    }

    cout << ukupna_vrednost << endl; // исписујемо збир вредности предмета које смо преселили
    return 0;
}
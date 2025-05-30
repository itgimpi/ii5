#include <bits/stdc++.h>
using namespace std;
// bez brojaca
int main() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int>levo;
    vector<int>sredina;
    vector<int>desno;
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    int l, d; cin >> l >> d;

    for (int i = 0; i < n; i++) {
        if (a[i] < l)
            levo.push_back(a[i]);

        else if (a[i] > d) 
            desno.push_back(a[i]);

        else 
            sredina.push_back(a[i]); }

    for (int i = 0; i < levo.size(); i++) 
        cout << levo[i] << ' ';
    cout << endl;

    for (int i = 0; i < sredina.size(); i++)
        cout << sredina[i] << " ";
    cout << endl;  

    for (int i = 0; i < desno.size(); i++)
        cout << desno[i] << " ";
    cout << endl;  

    return 0; }
#include <bits/stdc++.h>
using namespace std;
// Двојке и тројке дељиве са 3
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/dvojke_i_trojke_deljive_sa_3
// bolje resenje

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0

    int n;  cin>>n;
    int ostaci[]={0,0,0};
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        ostaci[x%3]++;
            }
    int res= 0;
    //parovi
    res+=ostaci[0]*(ostaci[0]-1)/2;
    res+=ostaci[1]*ostaci[2];
    //trojke
    res+=ostaci[0]*(ostaci[0]-1)*(ostaci[0] - 2)/6;
    res+=ostaci[1]*(ostaci[1]-1)*(ostaci[1] - 2)/6;
    res+=ostaci[2]*(ostaci[2]-1)*(ostaci[2] - 2)/6;
    res+=ostaci[0]*ostaci[1]*ostaci[2];


    cout<<res<<endl;
        
    }




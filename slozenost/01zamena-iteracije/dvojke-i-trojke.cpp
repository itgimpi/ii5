#include <bits/stdc++.h>
using namespace std;
// Двојке и тројке дељиве са 3
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/dvojke_i_trojke_deljive_sa_3
// BF 

int main() {
    ios_base::sync_with_stdio(false); // iskljuci sinhro.
    cin.tie(0); // false is 0

    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int res= 0;
    //parovi
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if((a[i]+a[j])%3==0)
                res++;

    //trojke
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k = j + 1; k < n; k++)
                if((a[i]+a[j] + a[k])%3==0)
                    res++;

    cout<<res<<endl;
        
    }




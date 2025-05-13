#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(begin(a), end(a));
    int br=0;
    int i;
    for(i=n-1;i>=3;i=i-2){
        br+=min(a[0]+2*a[1]+a[i], 2*a[0]+a[i]+a[i-1]);
    }
    if (i == 2) {
        br += a[0] + a[1] + a[2];
    } else if (i == 1) {
        br += a[1];
    } else if (i == 0) {
        br += a[0];
    }
    cout<<br<<endl;
    return 0;
}
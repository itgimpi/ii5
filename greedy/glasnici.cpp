#include <bits/stdc++.h>

using namespace std;

int main()
{
    //unos
    double d;//domet
    cin>>d;
    int n;//broj glasnika
    cin>>n;
    vector<double> g(n);

    for(int i=0; i<n; i++){
        cin>>g[i];}

    double t=0.0;//time

    double j=0;//pozicija najudaljenijeg glasnika koji zna poruku

    for (int i = 1; i < n; i++) {
        if (g[i]-t-j>d) {//proveravamo da li je sledeci glasnik u dometu
            t+=(g[i]-t-j-d)/2.0;//uvecavamo vreme
            j=g[i]-t;//azuriramo poziciju
    }   else {
            j = min(g[i]+t,j+d);//azuriranje pozicije u slucaju da je u dometu
    }
  }
    cout<<fixed<<showpoint<< setprecision(3)<<t<<endl;


    return 0;
}
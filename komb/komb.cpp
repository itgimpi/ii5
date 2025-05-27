#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>k;
    int retp=-1;
    int x;
    int br=0;
    while(cin>>x){
        k.push_back(x);
        br++;

    }
    int m=n;//broj koji se trazi na zadatom i

    int j=k.size();



    while(j>=0){
        if(k[j-1]==m){//54321 provera
            j--;
            m--;}
        else{
            retp=j-1;//odredi returning point
            break;
        }
    }
    if(retp==-1) {
        cout<<'-';
        return 0; }
        
    k[retp]+=1;
    for(int i=retp+1;i<k.size();i++){
        //k[i]=k[retp]+i-retp;
        k[i]=k[i-1]+1;
    }

    

    for(int i=0;i<k.size();i++){
        cout<<k[i]<< ' ';}


    return 0;
}
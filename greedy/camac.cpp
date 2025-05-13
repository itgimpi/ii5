#include <bits/stdc++.h>
using namespace std;

void sortiranje(int niz[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(niz[i] > niz[j])
            {
                int pom = niz[i];
                niz[i] = niz[j];
                niz[j] = pom;
            }
        }
    }
}
int main()
{
    int nosivostCamca; cin>> nosivostCamca;
    int brojPutnika; cin >> brojPutnika;
    int brojCamaca = 0;
    int masaPutnika[brojPutnika];

    for(int i = 0; i < brojPutnika; i++)
    {
        cin >> masaPutnika[i];
    }

    // sortiranje(masaPutnika, brojPutnika);
    sort(masaPutnika, masaPutnika+brojPutnika);

    int i = 0, j = brojPutnika-1;
    while(j >= i)
    {
        if(masaPutnika[i] + masaPutnika[j] <= nosivostCamca)
        {
            i++;
            j--;
        }

        else
        {
          j--;
        }

        brojCamaca++;
    }
    cout << brojCamaca;
    return 0;
}

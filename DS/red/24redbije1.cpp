#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/* Сваки елемент скупа S мора бити слика тачно једног елемента скупа S. 
Ако је сваки елемент скупа X (домена функције f) слика тачно једног елемента скупа X, онда је f бијекција на скупу X. 
Иначе мора да постоји елемент који није слика ни једног елемента скупа X и тај елемент не може бити део скупа S. 
Када тај елемент уклонимо (заједно са његовом сликом), добијамо скуп који је за један елемент мањи и на који можемо применити исти поступак 
(суштински, имамо описан индуктивни тј. рекурзивни поступак).

Иако редослед узимања елемената из радне листе може бити произвољан, најчешће се користи ред (даје осећај правичности). 
Решење у ком би се уместо реда користио стек било би такође исправно.*/

int main() {
    int n; cin >> n; // broj elemenata skupa X, svi glumci
    vector<int> f(n); // vektor omiljenih glumaca, f : X -> Y
    for (int i = 0; i < n; i++) cin >> f[i]; // f, za svakog glumca se unosi njegov omiljeni

    vector<int> broj(n, 0); // asocijativni niz, broji broj glumaca, glasove
    for (int i = 0; i < n; i++) // za svakog glumca odredi broj fanova
        broj[f[i]]++; // a to je br. preslikavanja iz skupa X u taj element
    queue<int> nepopularni; // Red elemenata koje niko ne voli 

    for (int i = 0; i < n; i++)
        if (broj[i] == 0)  //ako nije popularan... 
            nepopularni.push(i); //ide u listu...

    int res = n; // rešenje, br. pozvanih je inicijalno br. svih glumaca
    
    while (!nepopularni.empty()) { //dok ima nešto u listi...
        int i = nepopularni.front(); nepopularni.pop(); //izmi nekog nepopularnog
        res--;// on nije za S, niko ga ne voli
        if (--broj[f[i]] == 0) // Ako njegovog ljubimca više niko ne voli...
            nepopularni.push(f[i]); } // i on ide u listu
    cout << res << endl;
    return 0; }
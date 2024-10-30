#include <iostream>
#include <vector>
using namespace std;
/*
Низ 1,0, 0,1, 0,1,1,0, 0,1,1,0,1,0,0,1,…, који се састоји од нула и јединица, гради се на следећи начин: 
први елемент је 1; други се добија логичком негацијом првог NOT(1)=0, 
трећи и четврти логичком негацијом претходна два NOT(1)=0, NOT(0)=1, 
пети, шести, седми и осми логичком негацијом прва четири – добија се 0,1,1,0 итд. 
Дакле, кренувши од једночланог сегмента 1, 
сваком почетном сегменту који је дужине 2k (k узима вредности 0,1,2,…) дописује се сегмент исте дужине 
добијен логичком негацијом свих елемената почетног сегмента. За задато n одредити n-ти члан низа (бројање креће од 1). */

bool Morze(int n) {
    vector<bool> a(n+1);
    a[1] = true; // prvi je 1
    int brojac = 1; // broj do sada upisanih elemenata
    int segment = 1; // duzina segmenta koji se trenutno obradjuje
    while (brojac < n) {
        // negira segment trenutne duzine (1, 2, 4, 8, ...)
        for (int i = 1; i <= segment && brojac < n; i++) { // samo do n-tog elementa
            a[segment + i] = !a[i];
            brojac++; }
        segment *= 2; } // naredni segment koji treba negirati je duplo duzi
    return a[n]; }

int main() {
    int n; cin >> n;
    cout << (Morze(n) ? "1" : "0") << endl; // if...
    return 0;
}
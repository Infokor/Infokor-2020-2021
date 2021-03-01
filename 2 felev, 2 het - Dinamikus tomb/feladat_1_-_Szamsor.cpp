//  SZÁMSOR
/**
1. verzio:
    - resize
    - a[i] vagy a.at(i)
2. verzio
    - reserve - opcionalis - noveljuk a kapacitast, ezaltal nem kell majd ujrafoglalni a tomb meretet mikozben elemeket szurunk a vegere
    - push_back
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // int a[2000]; // Létrehozhatunk egy statikus tömbot. Viszont nem fog (garantaltan)  helyesen menni a programunk, ha n >= 2000
    vector<int>a;

    int n;
    cout<<"n="; cin>>n;
    a.resize(n); // 1. verzio: elore megnoveljuk a tomb meretet, majd utana az elemeket elerhetjuk a[i]-vel.
    // a.reserve(n);  - 2. verzio:  ha reserve-t hasznaljuk akkor csak a kapacitas no meg, a meret nem. a[i]-vel nem fogjuk tudni az elemeket elerni. push_back-et kell hasznalni.

    for (int i=0;i<n;i++)
    {
        //int x; cin>>x; //2. verzio: beolvasunk egy szamot
        //a.push_back(x); //2. verzio: a beolvasott szamot beszurjuk a tomb vegere, ezaltal megno a meret, es lehet hogy a kapacitas is.

        //cin>>a[i]; //1. verzio: olyan mint a statikus tombnel. Nem ellenorzi az indexeket hogy az intervallumokon belul vannak e
        cin>>a.at(i); //1. verzio: olyan mint az a[i], csak ellenorzi az indexeket hogy az intervallumokon belul vannak e. Ha nem akkor a program leall.
    }

    for (int i=n-1;i>=0;i--) //Kiirjuk a tombot forditott sorrendben
        cout<<a[i]<<" ";
    return 0;
}

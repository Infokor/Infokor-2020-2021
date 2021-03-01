/**
Nincs megadva, hogy hany szamot olvasunk be. Addig olvasunk be ameddig 0-t kapunk.

Az if(cin >> x) teljesul akkor, ha sikeres a beolvasas a billentyurol. (Tehat a mi esetunkben akkor nem sikeres ha betut olvasunk szam helyett).
Az x!=0 leellenorzi, hogy az olvasott szam az nem 0. Ha nem 0 akkor igazat terit vissza, klonben hamisat.

Tehat a while(cin>>x && x!=0) {...} ciklus addig megy vegbe ameddig nem olvasunk egy 0-t a billentyurol.
Ezt a technikat tanuljatok meg mert verseny feladatoknal is hasznaljak.
(lasd: https://stackoverflow.com/a/6791545)


Egy masik megoldas, ami Peter otlete, az az hogy do-while ciklussal vizsgaljuk a beolvasott elemeket. Viszont fontos, hogy ebben az esetben a cikluson belul megegyszer meg kell vizsgaljuk
azt hogy nem 0-t olvastunk be. Ugyanis kulonben a 0-t is hozzaadja a tombhoz.

Mind a ket megoldas jo.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a;

    /*
    do{
        int x;
        cin>>x;
        if(x != 0)
            a.push_back(x);
    }while(a.back()!=0);
    */

    int x;
    while(cin>>x && x!=0){
        a.push_back(x);
    }

    for(int i=a.size()-1; i>=0; i--){
        cout<<a[i]<<" ";
    }
    return 0;
}

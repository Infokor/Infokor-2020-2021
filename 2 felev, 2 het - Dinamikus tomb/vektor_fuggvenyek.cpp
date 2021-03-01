/**
Vektor fuggvenyek hasznalata.

Itt nezd meg a helyes hasznalatat: https://www.cplusplus.com/reference/vector/vector/
*/


#include <iostream>
#include <vector> // fontos, ahhoz hogy hasznțlhassuk a vektor tipust
#include <algorithm> // rendezeshez: a sort fuggveny

using namespace std;

int main()
{
    /// letrehozni vektort

    // ures vektor
    vector<int> szamok;

    // nullazott tomb: 5 darab 0
    vector<int> nullak(5, 0);


    /// elemek beszurasa a tomb vegere

    // beszur egy 4-est a tomb vegere
    szamok.push_back(4);
    szamok.push_back(3);
    szamok.push_back(1);
    szamok.push_back(1);
    szamok.push_back(1);


    /// vektor meretei

    cout << "tomb elemeinek szama: " << szamok.size() << "\n";
    cout << "tomb kapacitasa: " << szamok.capacity() << "\n";


    /// vektor elemeinek elerese:
    cout << "szamok[1] = " << szamok[1] << "\n";
    // az at az ugyanaz mint a [], de megvizsgalja, hogy az index a hatarokon belul legyen.
    // ha a hatarokokn kivul van akkor a program leall
    cout << "szamok.at(1) = " << szamok.at(1) << "\n";

    ///rendezes
    // novekvo sorrendben
    // meg kell adni a vektor elejet es veget
    sort(szamok.begin(), szamok.end());
    // tombok eseten ez igy nezett ki: sort(a, a + 5);

    // csokkeno sorrendben
    sort(szamok.begin(), szamok.end(), greater<int>());

    // csak az első 3 elemet rendezve növekvő sorrendbe:
    sort(szamok.begin(), szamok.begin() + 3);


    /// kiiratas / vegigjaras
    cout << "rendezve: ";
    for(int i = 0; i < szamok.size(); i++) {
        cout << szamok[i] << " ";
    }
    cout << "\n";

    /// vektor kiuritese - minden elemet torol
    szamok.clear();
    cout << "clear utan a szamok vektor merete: " << szamok.size() << "\n";

    /// vektor ujrameretezese
    //** Resize **//
    // Ha egy nagyobb szamot adsz, mint amekkor a mostani meret, akkor lefoglal egy nagyobb helyet, es fel is tolti
    szamok.resize(10);
    cout << "resize(10) utan a szamok vektor merete: " << szamok.size() << "\n"; // 10


    // Megadhatod, hogy milyen elemmel toltse fel
    //-- Ez jo 0-val valo feltoltesre --
    szamok.resize(15, 1);
    cout << "resize(15, 1) utan a szamok vektor merete: " << szamok.size() << "\n"; // 15
    cout << "szamok[11]: "  << szamok[11] << "\n";

    // Ha egy kisebb szamot adsz, mint amekkor a mostani meret, akkor a maradek elemeket letorli
    //-- Ez jo a gyors torlesre --
    szamok.resize(5);
    cout << "resize(5) utan a szamok vektor merete: " << szamok.size() << "\n"; // 5

    //** Reserve **//
    cout << "a szamok vektor kapacitasa: " << szamok.capacity() << "\n"; // 20 - valtozhat

    // Ha egy nagyobb szamot adsz, mint amekkor a mostani meret, akkor lefoglal egy nagyobb helyet, de nem tolti fel. Tehat a meret nem valtozik, de a kapacitas igen.
    szamok.reserve(22);
    cout << "reserve(22) utan a szamok vektor merete: " << szamok.size() << "\n"; // 5
    cout << "reserve(22) utan a szamok vektor kapacitasa: " << szamok.capacity() << "\n"; // 22

    // Ha egy kisebb szamot adsz, mint amekkor a mostani meret, akkor nem tortenik semmi
    //-- Ez jo arra hogy biztos legyek abban hogy 5 elem belefer ebbe a tombbe --
    szamok.reserve(2);
    cout << "reserve(2) utan a szamok vektor merete: " << szamok.size() << "\n"; // 5
    cout << "reserve(2) utan a szamok vektor kapacitasa: " << szamok.capacity() << "\n"; // 22


    /// elso es utolso elem elerese
    cout << "elso elem: " << szamok.front() << "\n";
    cout << "utolso elem: " << szamok.back() << "\n";

    return 0;
}


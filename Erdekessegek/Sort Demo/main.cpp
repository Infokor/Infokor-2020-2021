#include <iostream>
// tegyetek be az algorithm konyvtarat
#include <algorithm>

using namespace std;

int main()
{
    // rendezzuk novekvo sorrendbe egy tomb elemeit
    // a sort fuggveny meghivasa v nevu, n elemu tombre altalanosan
    // ha 0-tol van indexelve: sort(v, v+n);
    // ha 1-tol van indexelve: sort(v+1, v+n+1);
    // pl. egy 10 elemu, 0-tol indexelt tombre:
    int nov[10] = {5, 2, 12, 34, 3, 90, 91, 92, 56, 65};
    sort (nov, nov + 10);
    for (int i = 0; i < 10; i++) {
        cout << nov[i] << " ";
    }
    cout << endl;

    // rendezzuk csokkeno sorrendbe egy tomb elemeit
    // a sort fuggveny meghivasa v nevu, n elemu tombre altalanosan
    // ha 0-tol van indexelve: sort(v, v+n, greater<valtozo tipusa>());
    // ha 1-tol van indexelve: sort(v+1, v+n+1, greater<valtozo tipusa>())
    int csok[10] = {5, 2, 12, 34, 3, 90, 91, 92, 56, 65};
    sort (csok, csok + 10, greater<int>());
    for (int i = 0; i < 10; i++) {
        cout << csok[i] << " ";
    }
    cout << endl;

    // rendezzunk abc sorrendbe neveket
    string nev[5] = {"Kati", "Peti", "Anna", "Petra", "Panna"};
    sort(nev, nev+5);
    for (int i = 0; i < 5; i++) {
        cout << nev[i] << " ";
    }
    cout << endl;

    // rendezzunk forditott abc sorrendbe neveket
    string nev2[5] = {"Kati", "Peti", "Anna", "Petra", "Panna"};
    sort(nev2, nev2+5, greater<string>());
    for (int i = 0; i < 5; i++) {
        cout << nev2[i] << " ";
    }
    cout << endl;

    // rendezzunk csokkeno sorrendben egy, a billentyuzetrol beolvasott float tipusu tombot
    float v[100];
    int n;
    cout << "Az elemek szama (max 100): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Az " << i + 1 << ". elem: ";
        cin >> v[i];
    }
    sort(v, v+n, greater<float>());
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    // Eszrevetel: a floatok osszehasonlitasa nem mindig pontos, mert a szamitogep
    // binaris szamrendszerben nem mindig tudja pontosan abrazolni a torteket, es
    // a kulonbozo nagysagrendu ertekek osszehasonlitasa pedig kulonosen problemat okoz.

    return 0;
}

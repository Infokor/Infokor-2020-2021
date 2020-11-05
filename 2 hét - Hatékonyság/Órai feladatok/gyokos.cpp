/**
 * Mérd le a futási idejét az alábbi algoritmusnak. Próbáld n = 10, 100, 1 000, 10 000, 100 000, 100 000 000 -re.
 *
 * Algoritmus:
 * Olvass be egy n számot.
 * Írd ki a négyzetszámokat n-ig.
 *
 * Elemzés:
 * Bár látszólag az algoritmus úgy néz ki mint egy lineáris, nem az i-t hasonlítjuk össze n-el, hanem annak a négyzetét.
 * Tehát az i maximum értéke gyök(n).
 * Tehát az algoritmus a gyök(n) hatékonysági osztályába tartozik.
 */

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 1; i * i <= n; i++)
    {
        cout << i * i << " ";
    }

    /// Másképp is lehet írni

    /*
    for(int i = 1; i <= n; i++)
    {
        if( i * i <= n)
            cout << i * i << " ";
        else
            i = n;
    }
    */

    /*
    int i = 1;

    while( i * i <= n) 
    {
        cout << i * i << " ";
        i++;
    }
    */

    return 0;
}
 

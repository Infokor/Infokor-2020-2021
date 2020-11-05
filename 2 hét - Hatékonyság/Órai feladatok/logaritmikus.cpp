/**
 * Algoritmus:
 * Az alábbi algoritmus a beolvasott számott kírja és felezi. Ezt addig ismétli amíg 0-hoz érkezik.
 *
 * Elemzés:
 * Az algoritmus minden iterációban elossza a bemeneti adatot konstans (2) részre.
 * Tehát az algoritmus logaritmikus komplexitásu.
 *
 * Másrészt a lépések száma az a log2(n) egész része.
 * Jövő héten megtudjátok miért.
 */

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = n; i > 0; i /= 2)
    {
        cout << i << " ";
    }
    return 0;
}
 

/**
 * Mérd le a futási idejét az alábbi algoritmusnak. Próbáld n = 10, 100, 1 000, 10 000, 100 000, 100 000 000 -re.
 *
 * Algoritmus:
 * Olvass be egy n számot.
 * Írd ki az első n szám mindegyikére az osztóinak számát.
 *
 * Elemzés:
 * A külső ciklus változója, i, 1 és n közöti értékeket vesz fel. Tehát i lineáris n-ben.
 * A belső ciklus változója, j, 1 és i közötti értékeket vesz fel. Tehát j lineáris i-ben, tehát lineáris n-ben is.
 * Tehát két ciklus van egymásba helyezve, mindkettő lineárisan n-ben. => megközelítőleg n*n = n^2 lépés
 * Tehát négyzetes algoritmus.
 *
 *
 * Másrészt az i és j értékeit így írhatjuk fel:
 * i : j1, j2, j3, ....
 *
 * 1 : 1
 * 2 : 1 2
 * 3 : 1 2 3
 * 4 : 1 2 3 4
 * 5 : 1 2 3 4 5
 * 6 : 1 2 3 4 5 6
 * .....
 *
 * Amint láthatjuk, a j minden alkalommal eggyel több értéket vesz fel.
 * i = 1-re 1 értéket vesz fel a j
 * i = 2-re két értéket vesz fel a j
 * ...
 * i = n-re n értéket vesz fel a j
 *
 * Tehát j összesen felvesz: 1 + 2 + 3 + ... + n = (1 + n) * n / 2 = (1/2) * n^2 + (1/2) * n értéket. (számtani haladvány)
 * Mivel a négyzetes algoritmus gyorsabban nő mint a lineáris, ezért teljesen eltekinthetünk (1/2) * n -től.
 * Maradt (1/2) * n^2. A konstansal való szorzástól is szintén el lehet tekinteni.
 * Végül az marad, hogy az algoritmus komplexitása négyzetes.
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    int db;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        db = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                db++;
            }
        }

        cout << db << " ";
    }

    return 0;
}

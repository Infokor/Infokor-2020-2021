/**
 * Mérd le a futási idejét az alábbi algoritmusnak. Próbáld n = 10, 100, 1 000, 10 000, 100 000, 100 000 000 -re.
 *
 * Algoritmus:
 * Olvass be egy n számot.
 * Írd ki az első n szám háromszorosát.
 *
 * Elemzés:
 * Az algoritmus lineáris mivel egyetlen ciklust tartalmaz, ami n-szer ismétel meg egy konstans komplexitású utasítást.
 * Tehát ahogy nő a bemeneti adat mérete (n), úgy nő az algoritmus futási ideje.
 *
 * Másrészt a ciklus előtt 2 utasítás történik, a cikluson bejül 2 (szorzás, és kiírás), az utóbbit n-szer ismételve.
 * (Nem számoltam bele az i deklarációját, hasonlítását és növelését)
 * Tehát 2 + n * 2 ≈ 2n ≈ n lépésből áll az algoritmus.
 */

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++) 
    {
        cout << 3 * i << " ";
    }

    return 0;
}
 

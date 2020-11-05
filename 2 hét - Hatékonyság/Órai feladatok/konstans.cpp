/**
 * Mérd le a futási idejét az alábbi algoritmusnak. Próbáld n = 10, 1 000, 100 000, 100 000 000 -re.
 *
 * Algoritmus:
 * Olvass be egy n számot.
 * Számold ki a négyzetét.
 * Írd ki az eredményt
 *
 * Elemzés:
 * Az algoritmus konstans, ugyanis a futási ideje nem függ a bemenettől. 
 * Konstans számú (4) utasítást végez el. (return-t leszamitva)
 */

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int negyzet = n * n;

    cout << negyzet;
    return 0;
}

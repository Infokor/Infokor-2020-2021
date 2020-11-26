#include <iostream>

using namespace std;

// Feladat: Kickstart Allocation (2020, round A, 1. feladat)
// otlet: ahhoz, hogy a legtobb hazat tudjuk megvenni,
// a legolcsobbakat kell megvennunk.
// Rendezzuk a hazakat az aruk szerint novekvo sorrendbe.
// Mivel az arak 1 es 1000 kozott vannak, hasznalhatunk
// counting sortot.
// A rendezes utan a leheto legtobb hazat vasaroljuk meg,
// a legolcsobbtol a legdragabbig haladva, amig nem haladjuk
// meg a rendelkezesunkre allo osszeget.

int main()
{
    int t, n, b, a[100000];
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> b;
        // beolvasas
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        // gyakorisagtomb letrehozasa
        int gyak[1001] = {0};
        for (int j = 0; j < n; j++) {
            gyak[a[j]]++;
        }
        // rendezes a gyakorisagtomb alapjan
        int index = 0;
        for (int j = 1; j <= 1000; j++) {
            for (int k = 1; k <= gyak[j]; k++) {
                a[index] = j;
                index++;
            }
        }
        // vasaroljuk meg a leheto legtobb hazat
        // a legolcsobbtol indulva, amig nem haladjuk meg
        // a rendelkezesunkre allo osszeget (es amig meg nem
        // vasaroltuk az osszes hazat).
        int ossz = 0;
        index = 0;
        while (ossz <= b && index < n) {
            ossz = ossz + a[index];
            index++;
        }
        // eredmeny kiiratasa
        if (ossz <= b) {
            cout << "Case #" << i << ": " << n << endl;
        } else {
            cout << "Case #" << i << ": " << index - 1 << endl;
        }

    }
    return 0;
}

/**
Egy intervallumban levo veletlenszeru szam generalasa.

A rand() fuggveny visszaterit egy "veletlenszeru" szamot. Igazabol egy kiindulasi ertek (seed) es egy matematikai fuggveny alapjan szamolja ki a kovetkezo elemet.
Tehat ha nem irsz elotte semmit, akkor minden alkalommal, amikor futtatod a programot, ugyanazokat a szamokat fogja generalni.

Tehat szukseges a kiindulasi erteknek egy olyas valaminek lennije, ami nem konstans minden futtataskor. Erre a legjobb, ha az idot fogjuk hasznalni.
A time(0) fuiggveny visszateriti a mostani idot. Ha ezt adjok meg az srand() fuggvenynek, akkor a seed az mas lesz minden futaskor (mert az ido telik).

Ahhoz hogy a generalt ertek benne legyen egy intervallumban, tovabbi modositasokat kell veghezvigyunk a generalt szamon.
- legyen az intervallum: [kezdet, veg],  pl. [3, 10].
- az intervallum hosssza: kezdet - veg + 1 = 10 - 3 + 1 = 8
- rand() a szamokat az alabi intervallumba generalja: [INT_MIN, INT MAX]
1. csokkentsuk a generalt elemek intervallumjanak a hosszat, hogy megegyezzen a kivant intervallum hosszaval:
    - rand % hossz
    - az elemek intervalluma: [0, hossz - 1], pl.[0, 7]
2. csusztassuk el az intervallumot, hogy megegyezzen a kivant intervallummal
    - rand % hossz + kezdet
    - az elemek intervalluma: [kezdet, hossz - 1 + kezdet] = [kezdet, veg], pl. [3, 10]

Forras. Itt is nezzed meg: https://www.cplusplus.com/reference/cstdlib/rand/
*/

#include <iostream>
#include <time.h> // kell ahhoz hogy tudjuk lekerni a mostani idot

using namespace std;

/**
Visszaterit veletlenszeruen egy szamot a [kezdet, veg] intervallumbol.
*/
int random(int kezdet, int veg) {
    return rand() % (veg - kezdet + 1) + kezdet;
}


int main()
{
    srand(time(0)); // kiindulasi erteknek beallitjuk a jelenlegi idot

    for(int i = 0; i< 10; i++) { // generaljunk 10 szamot

        cout << random(1, 10) << endl; // az ertekek 1 es 10 kozott legyenek

    }
    return 0;
}

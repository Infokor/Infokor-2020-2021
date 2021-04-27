#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

// https://www.pbinfo.ro/probleme/2167/alee

#define MAX_SIZE 176

const int FA = -1; //minden fat a parkban -1-gyel jelolunk a matrixban
int meret; //park merete

int park[MAX_SIZE+1][MAX_SIZE+1] = {0}; //park[i][j] = (i, j) cella tavolsaga a kezdoponttol + 1
// a meg nem meglatogatott mezok erteke 0
// a kezdopont erteke 1
// az algoritmus vegen park[vegpont.x][vegpont.y] megadja, hogy hany kolemezre van szuksegunk az
// utvonal lekovezesehes a kezdoponttol a vegpontig, ugy, hogy nem kovezunk le olyan mezoket, amelyeken
// egy fa talalhato

/** Igazat terit vissza, ha a koord altal meghatarozott cella a park hatarain belul van, egyebkent hamisat. */
bool valosCella(pair<int, int> koord) {
    if (koord.first >= 1 && koord.first <= meret && koord.second >= 1 && koord.second <= meret) {
        return true;
    }
    else return false;
}

/**
 * Vissszateriti a kolemezek minimalis szamat egy utvonal lekovezesehez a kiindulo es vegpont kozott,
 * ugy, hogy nem kovezhetunk le olyan mezot, amelyen egy fa talalhato.
 */
int Lee(pair<int, int> kiindulo, pair<int, int> veg) {
    queue<pair<int, int>> q; //a megtalalt, de meg nem meglatogatott cellak sora
    q.push(kiindulo);

    int sorPlusz[4] = {-1, 0, 1, 0};
    int oszPlusz[4] = {0, 1, 0, -1};

    park[kiindulo.first][kiindulo.second] = 1;

    bool talalt = false;
    if (kiindulo == veg) talalt = true; //todo
    while (!q.empty() && !talalt) { //keressunk addig, amig nem talaljuk meg a vegpontot vagy amig van meglatogatatlan, de elerheto mezo
        pair<int, int> pont = q.front();
        for (int i = 0; i < 4; i++) { //szamoljuk ki mind a negy szomszedjanak a koordinatait
            pair<int, int> szomszed;
            szomszed.first = pont.first + sorPlusz[i];
            szomszed.second = pont.second + oszPlusz[i];
            if (valosCella(szomszed) && park[szomszed.first][szomszed.second] == 0) {
            //ha talaltunk egy olyan szomszesod mezot, amely a park hatarain belul van es meg nem volt meglatogatva
                park[szomszed.first][szomszed.second] = park[pont.first][pont.second] + 1; //akkor allitsuk be a tavolsagat
                q.push(szomszed); //tegyuk be a meglatogatando mezok koze
                if (szomszed == veg) { //ha az ujonnan megtalalt cella a keresett cella, akkor fejezzuk be a keresest
                    talalt = true;
                }
            }
        }
        q.pop();
    }
    return park[veg.first][veg.second];
}

int main()
{
    ifstream f("alee.in");
    ofstream g("alee.out");
    int fakDb;
    int x, y;

    f >> meret >> fakDb;

    for (int i = 1; i <= fakDb; i++) {
        f >> x >> y;
        park[x][y] = FA;
    }

    pair<int, int> kezdo;
    pair<int, int> veg;

    f >> kezdo.first >> kezdo.second >> veg.first >> veg.second;

    g << Lee(kezdo, veg) << endl;
    return 0;
}

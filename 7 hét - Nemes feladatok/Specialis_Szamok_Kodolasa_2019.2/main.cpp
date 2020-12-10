#include <iostream>

using namespace std;

int main()
{
    int vegp[100000] = {0}, kap[100000];
    int pontDb, vezetekDb, kp;
    cin >> pontDb >> vezetekDb;
    for (int i = 1; i <= vezetekDb; i++) {
        cin >> kp;
        cin >> vegp[kp] >> kap[kp];
    }

    // gazfogyasztok szama
    // minden olyan pont gazfogyaszto, amibol nem indul vezetekszakasz
    // mivel minden pontbol maximum 1 vezetekszakasz indulhat, ezert
    // a gazvezetok szama egyenlo a pontok szama - azon pontok szama,
    // amelyekbol indul vezetekszakasz, azaz pontDb - vezetekDb
    cout << pontDb - vezetekDb << endl;

    // keressuk meg a gazlalohelyeket:
    // azok a pontok, amelyek nem vepontjai egyetlen szakasznak sem
    bool vp_elofordul[100000] = {0};
    for (int i = 1; i <= pontDb; i++) {
        vp_elofordul[vegp[i]] = true;
    }

    // cel: menjunk vegig a vezetekeken, keressuk meg a gazfogyasztot (a vezetek
    // vegpontja) es a vezetek kapacitasat, amit a vezetek szakaszai kozul a
    // legkisebb kapacitasu ad meg
    for (int i = 1; i <= pontDb; i++) {
        if (!vp_elofordul[i]) {
            // induljunk el minden olyan pontbol, ami gazlelohely
            int most = i; // most = a jelenlegi pont.
            int gk = 1001; // a vezetek kapacitasa
            while (vegp[most] != 0) { // amig meg van hova tovabbfolynia a gaznak,
                                      // azaz indul vezetekszakasz a jelenlegi pontbol
                if (gk > kap[most]) { //ha a kovetkezo vezetekszakasz kapacitasa kisebb,
                                      // akkor a vezetek kapacitasa is lecsokken
                    gk = kap[most];
                }
                most = vegp[most]; // lepjunk at a kovetkezo szakasz vegpontjaba
            }
            cout << most << " " << gk << endl;
        }
    }
    return 0;
}

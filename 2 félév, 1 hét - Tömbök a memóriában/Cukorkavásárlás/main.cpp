#include <iostream>

using namespace std;

// 2. felev, 1. het: cukorkavasarlas

int main()
{
    int a[100];
    int csomagDb, cukorkaDb;
    cin >> csomagDb >> cukorkaDb;
    for (int i = 0; i < csomagDb; i++) {
            cin >> a[i];
    }

    int bal = 0, jobb = csomagDb-1;

    while(a[bal] + a[jobb] != cukorkaDb && bal < jobb) {
        if (a[bal] + a[jobb] < cukorkaDb) {
            bal++;
        } else {
            jobb--;
        }
    }

    if (bal < jobb) {
        cout << bal << " " << jobb << endl;
    } else {
        cout << "nincs ilyen csomag paros" << endl;
    }
    return 0;
}

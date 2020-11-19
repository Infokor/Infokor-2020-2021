#include <iostream>

using namespace std;

// 4. het, Keresztmetszet feladat

int main()
{
    int n, m;
    int a[10001], b[10001];
    // beolvasas
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }

    // keressuk a elemeit b-ben
    int c[10001]; // c tomb tartalmazza a kozos elemeket
    int cDb = 1;
    for (int i = 1; i <= n; i++) {
        int bal = 1, jobb = m, kozep;
        bool talalt = false;
        while(!talalt && jobb >= bal) { // binaris kereses
            kozep = (bal + jobb) / 2;
            if (a[i] > b[kozep]) {
                bal = kozep + 1;
            } else if (a[i] < b[kozep]) {
                jobb = kozep - 1;
            } else {
                c[cDb] = a[i];
                cDb++;
                talalt = true;
            }
        }
    }

    for (int i = 1; i < cDb; i++) {
        cout << c[i] << " ";
    }
    return 0;
}

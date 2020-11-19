#include <iostream>
#include <algorithm>

using namespace std;

// 4. hét, Számjegyek feladat

int main()
{
//    1. megoldas: sort fuggvennyel
//    int n;
//    cin >> n;
//    int szj[10];
//
//    int index = 0;
//    while (n > 0) {
//        szj[index] = n%10;
//        n /= 10;
//        index++;
//    }
//
//    sort(szj + 0, szj + index, greater<int>());
//
//    for (int j = 0; j < index; j++) {
//        cout << szj[j];
//    }

//  2. megoldas: gyakoriság tömbbel (hatékonyabb)
    int n;
    cin >> n;
    int szj[10] = {0};

    while (n > 0) {
        szj[n%10]++;
        n /= 10;
    }

    for (int i = 9; i >= 0; i--) {
        for (int j = 1; j <= szj[i]; j++) {
            cout << i;
        }
    }

//  Megjegyzes: az n=0 esetet külön le kéne kezelni
    return 0;
}

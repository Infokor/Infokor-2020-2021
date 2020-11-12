#include <iostream>

using namespace std;

int leggyakoribb(int tomb[], int meret)
{
    // TODO

    return -1;
}

int main()
{
    int meret = 10;
    int tomb[] = {45, 12, 33, 12, 20, 12, 45, 90, 33, 20};

    int ertek = leggyakoribb(tomb, meret);

    cout << "A leggyakoribb érték: " << ertek;
    return 0;
}

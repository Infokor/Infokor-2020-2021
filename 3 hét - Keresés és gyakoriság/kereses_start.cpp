#include <iostream>

using namespace std;

int keres(int tomb[], int meret, int elem)
{
    // TODO
    return -1;
}

int main()
{
    int meret = 5;
    int tomb[] = {6, 13, 45, 87, 100};
    int elem;

    cin >> elem;

    int pozicio = keres(tomb, meret, elem);

    if(pozicio == -1)
        cout << elem << " nem szerepel a tömbben";
    else
        cout << elem << " pozíciója: " << pozicio;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    cout << "Vvedite dlinu massiva: ";
    int n;
    cin >> n;
    int* k = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    int a = 0, p;
    cout << "vvedite p";
    cin >> p;
    for (int i = 0; i < n; i++) {
        if (k[i] > p) {
            a++;
        }

    }
    cout << a;

    for (int i = 0; i < n; i++) {
        cout << k[i] << " ";

    }


}
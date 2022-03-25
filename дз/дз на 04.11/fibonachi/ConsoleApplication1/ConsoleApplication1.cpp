#include <iostream>
using namespace std;

int main()
{
    cout << "Vvedite dlinu massiva: ";
    int n;
    cin >> n;
    int* k = new int[n];
    if (n == 1) {
        k[0] = 1;
    }
    else {
        k[0] = 1;
        k[1] = 1;
        for (int i = 2; i < n; i++) {
            k[i] = k[i - 1] + k[i - 2];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << k[i] << " ";
    }
    


    /*else {
        cout << n << endl;
        int a = 0, b = 1;
        for (int i = 0; i < 20; i++) {
            swap(a, b);
            a += b;
            cout << a <<" " << endl;
        }
    }
    */
}

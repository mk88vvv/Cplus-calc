#include <iostream>
using namespace std;

int main()
{
    cout << "Vvedite dlinu massiva: ";
    int n;
    cin >> n;
    int* k = new int[n];
    int* temp = k;
    if (n == 1) {
        k[0] = 1;
    }
    else {
        *temp = 1;
        temp++;
        *temp = 1;
        temp++;
        for (int i = 2; i < n; i++) {
            *temp = *(temp - 1) + *(temp - 2);
            temp++;
        }
    }
    temp = k;
    for (int i = 0; i < n; i++) {
        cout << *temp << " ";
        temp++;
    }
}

#include <iostream>
using namespace std;

int main()
{
    cout << "Vvedite dlinu massiva: ";
    int n;
    cin >> n;
    int* k = new int[n];
    int* b = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    int l = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (k[j] > k[j + 1])
            {
                swap(k[j], k[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k[i] == k[j])
            {
                l++;
            }
        }
        b[i] = l;
        l = 0;
    }
    cout << k[0] << " " << b[0] << endl;
    for (int i = 1; i < n; i++) {
        if (k[i] != k[i - 1]){
            cout << k[i] << " " << b[i] << endl;
        }
        
        

    }


}
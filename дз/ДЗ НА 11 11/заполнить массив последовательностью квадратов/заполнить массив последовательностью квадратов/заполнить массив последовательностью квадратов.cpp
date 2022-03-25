
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int* k = new int[n];
    int* temp = k;
    for (int i = 0; i < n; i++) {
        cin >> *temp;
        temp++;
    }
    temp = k;

    int* k1 = new int[n];
    int* temp1 = k1;
    for (int i = 0; i < n; i++) {
        cin >> *temp1;
        temp1++;
    }
    temp1 = k1;

    int* k3 = new int[n * 2];
    int* temp3 = k3;
    for (int i = 0; i < n; i++) {
        *temp3 = *temp;
        temp++;
        temp3++;
    }
    for (int i = 0; i < n; i++) {
        *temp3 = *temp1;
        temp1++;
        temp3++;
    }
    temp = k3;
    for (int i = 0; i < n*2; i++) {
        cout << *temp << " ";
        temp++;
    }
}
    


    /*for (int i = 0; i < n; i++) {
        cout << *temp << " ";
        temp++;
    }*/

    /*int n = 10;
    int* k = new int[n];
    int* temp = k;
    for (int i = 1; i < n+1; i++) {
        *temp++ = pow(i,2);
    }
    for (int i = 0; i < n; i++) {
        cout << k[i] << " ";
    }*/

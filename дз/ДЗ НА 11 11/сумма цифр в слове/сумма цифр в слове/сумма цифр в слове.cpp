#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "asdv125a3ksk89sasd";
    int count = 0;
    int sum = 0;
    char c;
    for (int i = 1; i < a.length(); i++) {
        c = a[i];
        if (c >= '0' && c <= '9') {
            count+=1;
            sum += c - '0';
           
        }
    }
    cout << count << " - digit counts" << endl <<  sum << " - summ";
}

    
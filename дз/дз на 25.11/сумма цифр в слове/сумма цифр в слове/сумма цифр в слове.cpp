#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "asdv125a3k-sk89sasd";
    char* l = new char[a.length()];
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
    cout << count << " - digit counts" << endl <<  sum << " - summ\n";
    for (int i = 0; i < a.length(); i++) {
        l[i] = a[i];
    }
    for (int i = 0; i < a.length(); i++) {
        cout << l[i];
    }
    
}

    
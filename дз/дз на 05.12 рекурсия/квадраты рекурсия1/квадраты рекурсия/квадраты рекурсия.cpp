#include <iostream>
using namespace std;

void dgr(int a, int b)
{
    if (a == 0 or b == 0 or b < a or a == b) {
        return; // что такое пустой ретурн = break(in for);
    }
    else {
        cout << a * a << '\n';
        dgr(++a, b);
    }
    return; //break
}

int main()
{
    dgr(1, 9);
    return 0;
}

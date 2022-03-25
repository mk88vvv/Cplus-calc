
#include <iostream>
using namespace std;

int fib(int a) {
    /*if (a == 0) {
        return 0;
    }
    else if (a == 1) {
        return 1;
    }
    else {
        return fib(a - 1) + fib(a - 2);
    }*/
    int pred1=1, pred2=1;
    int res = 1;
    while (a > 2) {
        res += pred2;
        pred2 = pred1;
        pred1 = res;
        a--;
    }
    return res;
}
double stepen(int x, int n) {
    /*if (n == 0)return 1;
    if (n > 0) {
        return x * stepen(x, n - 1);
    }
    if (n < 0) {
        return 1 / stepen(x, -n);
    }*/
    double res = x;
    int resnminus = 0;
    if (n > 0) {
        while (n > 1) {
            res*= x;
            n--;
        }
       return res;
    }
    if (n < 0) {
        n = -n;
        while (n > 1) {
            res *= x;//sdsdads
            n--;
        }
        return 1.0 / res;
    }
}

int main()
{
    //cout << fib(6);
    cout << stepen(3.0, -1);
    return 0;
}

#include <iostream>
using namespace std;

int max(int* b, int index) {
    if (index==0){
        return b[0];
    }
    int k = max(b, index - 1);
    if (b[index] > k){
        return b[index];
    }
    else {
        return k;
    }
}


int main()
{   
    int b[10] = { 1,3,6,2,17,9,11,15,5,10 };
    cout << max(b,9)<< endl;
}



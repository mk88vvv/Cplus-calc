#include <iostream>
using namespace std;

int nod(int l, int m) {
	if (m == 0) {
		return(l);
	}
	return nod(m, l % m);
}

int main()
{
	cout <<nod(20,13);
}


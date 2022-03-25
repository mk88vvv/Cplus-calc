#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Vvedite dlinu massiva 1:";
	cin >> n;
	int* a = new int[n];
	int n1;
	cout << "Vvedite dlinu massiva 2:";
	cin >> n1;
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = i;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n1; i++) {
		b[i] = n1-i;
		cout << b[i] << " ";
	}
	cout << endl;
	int* c = new int[n + n1];
	int* temp = c;
	for (int i = 0; i < n; i++) {
		*temp = a[i];
		temp++;
	}
	delete[] a;
	for (int i = 0; i < n1; i++) {
		*temp++ = b[i];
	}	
	delete[] b;
	temp = c;
	for (int i = 0; i < n + n1; i++) {
		cout << *temp++ << " ";
	}
	delete[] c; 


}
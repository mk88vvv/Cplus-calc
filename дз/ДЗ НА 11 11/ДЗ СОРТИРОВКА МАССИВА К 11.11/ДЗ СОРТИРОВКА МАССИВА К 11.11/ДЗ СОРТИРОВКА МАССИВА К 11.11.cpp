
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Vvedite dlinu massiva :";
	cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int* temp = a;
	for (int i = 0; i < n; i++) {
		int* temp1 = a;
		for (int j = 0; j < n; j++) {
			if (*temp < *temp1) {
				swap(*temp, *temp1);
				
			}
			temp1++;
		}
		temp++;
	}
	
	temp = a;
	for (int i = 0; i < n; i++) {
		cout << *temp++ << " ";
	}
	delete[] a;
}
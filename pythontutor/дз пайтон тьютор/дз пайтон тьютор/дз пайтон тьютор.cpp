

#include <iostream>
using namespace std;

int main()
{
	int* a = new int[5];
	int* temp = a;
	int b;
		for (int i = 0; i < 5; i++)
			cin >> *temp++;
	b = *temp;
		temp = a;
	for (int i = 0; i < 5; i++){
		if (b < *(temp + 1)) {
			b = *(temp + 1);
		}
			temp++;
		}
		cout << b;


		
	
}


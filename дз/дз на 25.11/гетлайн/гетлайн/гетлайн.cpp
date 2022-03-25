
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Hello World!\n";
	string a;
	getline(cin, a);
	cout << a;
	for (int i = 0; i < a.length(); i++) {
		stringstream ss(a);
	}
}



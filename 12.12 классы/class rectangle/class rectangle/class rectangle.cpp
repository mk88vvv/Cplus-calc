#include <iostream>
using namespace std;

class rectangle
{
private:
	int sidea;
	int sideb;
public:
	rectangle() {
		sidea = 16;
		sideb = 42;
	}
	rectangle(int a) {	
		sidea = a;
		sideb = a;
	}
	rectangle(int a,int b) {
		sidea = a;
		sideb = b;
	}
	~rectangle() {
	}
	rectangle operator + (rectangle b) {
		rectangle c;
		if (sidea == b.getsidea()) {
			c.setsidea(sidea);
			c.setsideb(sideb + b.getsideb());
		}
		else if (sideb == b.getsideb()) {
			c.setsideb(sideb);
			c.setsidea(sidea + b.getsidea());
		}
		else if (sidea == b.getsideb()) {
			c.setsidea(sidea);
			c.setsideb(sideb + b.getsidea());
		}
		else if (sideb == b.getsidea()) {
			c.setsideb(sideb);
			c.setsidea(sidea + b.getsideb());
		}
		else {
			c.setsidea(sidea);
			c.setsideb(sideb);
		}
		return c;
	}
	rectangle operator * (int b) {
		rectangle c;
		if (sidea > sideb) {
			c.setsidea(sidea * b);
			c.setsideb(sideb);
		}
		else {
			c.setsideb(sideb * b);
			c.setsidea(sidea);
		}
		return c;
	}
	bool operator > (rectangle b) {
		if (sidea > b.sidea && sideb > b.sideb) {
			return true;
		}
		return false;
	}
	friend ostream& operator<<(ostream &os, const rectangle a) {
		os << a.sidea << " " << a.sideb;
		return os;
	}
	friend istream& operator>>(istream& ifs, rectangle& a) {
		a.sidea = 0;
		a.sideb = 0;
		string temp;
		ifs >> temp;
		bool ll = true;
		for (int i = 0; i < temp.size(); i++) {
			if (ll && temp[i] != '.') {
				a.sidea=a.sidea*10 + temp[i]-'0';
			}
			else if (!ll) {
				a.sideb = a.sideb * 10 + temp[i] - '0';
			}
			if (temp[i] == '.') ll = !ll;
		}
		return ifs;
	}
	void setsidea(int a) {
		if (a <= 0) {}
		else sidea = a;
	}
	int getsidea() {
		return sidea;
	}
	void setsideb(int b) {
		if (b <= 0) {}
		else sideb = b;
	}
	int getsideb() {
		return sideb;
	}
	void plus(rectangle b) {
		if (sidea == b.getsidea()) {
			sideb += b.getsideb();
		}
		else if (sideb == b.getsideb()) {
			sidea += b.getsidea();
		}
		else if (sidea == b.getsideb()) {
			sideb += b.getsidea();
		}
		else if (sideb == b.getsidea()) {
			sidea += b.getsideb();
		}
		else cout << "Ne mojem slojit'";
		cout << sidea << " " << sideb << endl;
	}
	void minus(rectangle b) {
		if (sidea == b.getsidea()){
			sideb -= b.getsideb();
			if (sideb < 0) sideb *= -1;
		}
		else if (sideb == b.getsideb()) {
			sidea -= b.getsidea();
			if (sidea < 0) sidea *= -1;
		}
		else if (sidea == b.getsideb()) {
			sideb -= b.getsidea();
			if (sideb < 0) sideb *= -1;
		}
		else if (sideb == b.getsidea()) {
			sidea -= b.getsideb();
			if (sidea < 0) sidea *= -1;
		}
		else cout << "Ne mojem slojit'";
		cout << sidea << " " << sideb << endl;
	}
	void umnoj(int b) {
		if (sidea > sideb) {
			sidea *= b;
		}
		else sideb *= b;
		cout << sidea << " " << sideb;
	}
};

int main()
{
	rectangle a;
	rectangle b(30,16);
	//a * 4;
	//minus(b);
	cin >> a;
	cout << a;
	cout << (a > b);
	return 0;
}

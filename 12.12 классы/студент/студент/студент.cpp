#include <iostream>
#include <string>
using namespace std;

class student
{
	private:
		double averagemark;
		string name;
		int kurs;
		int countofmarks;
	
	public:
		student() {
			countofmarks = 1;
			kurs = 1;
			averagemark = 2.5;
			
		}
		~student() {
	
		}
		void setaveragemark(double a) {
			if (a >= 2 && a <= 5) {
				averagemark = a;
			}
			else cout << "Средний балл не может быть меньше двух или больше пяти";
		}
		double getaveragemark() {
			return averagemark;
		}
		void setname(string n) {
			name = n;
		}
		string getname() {
			return name;
		}
		void setkurs(int a) {
			if (a < 1 || a>5) {
				cout << "Курс не может быть равен 0 или быть больше 5";
			}
			else kurs = a;
		}
		int getkurs() {
			return kurs;
		}
		void setcountofmarks(int a) {
			countofmarks = a;
		}

		void addaveragemark(double a) {
			if (a >= 2 && a <= 5) {
				averagemark = ((averagemark*countofmarks)+a)/(countofmarks+1);
				countofmarks++;
			}
			else cout << "фывфыв";
		}
		void changekurs() {
			if (averagemark > 2) {
				kurs += 1;
			}	
			else cout << "Студент недостаточно квалифицирован";
		}
};



int main()
{
	int p;
	setlocale(LC_ALL, "Russian"); //sdsadasdadadsad
	student a;
	a.setname("Влад");
	a.setkurs(4);
	a.changekurs();
	cout << a.getkurs();
	/*cout << "Начался урок математики, к доске был вызван " << a.getname() << endl << "Оценка:";
	cin >> p;
	a.addaveragemark(p);
	cout << p << endl << a.getaveragemark();*/
}	

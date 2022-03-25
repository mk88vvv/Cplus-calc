#include <iostream>
using namespace std;
#include <cmath>
 
class vec
{
private:
    class dot
    {
    public:
        int x, y;
        dot() {
            x = 0;
            y = 0;
        }
    };
    dot begin, end;
public:
    vec() {
        end.x = 1;
    }
    vec(int a,int b) {
        end.x = a;
        end.y = b;
    }
    vec(int a, int b, int c, int d) {
        begin.x = a;
        begin.y = b;
        end.x = c;
        end.y = d;
    }
    ~vec() {
    }
    vec operator + (vec b) {
        vec vector3;
        vector3.begin.x = begin.x;
        vector3.begin.y = begin.y;
        vector3.end.x = (end.x + (b.end.x-b.begin.x));
        vector3.end.y = (end.y + (b.end.y-b.begin.y));
        return vector3;
    }
    vec operator - (vec b) {
        vec vector3;
        vector3.begin.x = begin.x;
        vector3.begin.y = begin.y;
        vector3.end.x = (end.x - (b.end.x - b.begin.x));
        vector3.end.y = (end.y - (b.end.y - b.begin.y));
        return vector3;
    }
    vec operator * (int a) {
        vec vector3;
        vector3.begin.x = begin.x;
        vector3.begin.y = begin.y;
        vector3.end.x = end.x * a;
        vector3.end.y = end.y * a;
        return vector3;
    }
    vec operator / (int a) {
        vec vector3;
        vector3.begin.x = begin.x;
        vector3.begin.y = begin.y;
        vector3.end.x = end.x / a;
        vector3.end.y = end.y / a;
        return vector3;
    }
    friend istream& operator>>(istream& ifs, vec& a) {
        a.begin.x = 0;
        a.begin.y = 0;
        a.end.x = 0;
        a.end.y = 0;
        string temp;
        ifs >> temp;
        bool ll = true;
        for (int i = 1; i < temp.size() - 1; i++) {
            if (ll && temp[i] != ',') { //(0,0)
                a.begin.x = a.begin.x * 10 + temp[i] - '0';
            }
            else if (!ll) {
                a.begin.y = a.begin.y * 10 + temp[i] - '0';
            }
            if (temp[i] == ',') ll = !ll;
        }
        ifs >> temp;
        ll = true;
        for (int i = 1; i < temp.size() - 1; i++) {
            if (ll && temp[i] != ',') { //(0,0)
                a.end.x = a.end.x * 10 + temp[i] - '0';
            }
            else if (!ll) {
                a.end.y = a.end.y * 10 + temp[i] - '0';
            }
            if (temp[i] == ',') ll = !ll;
        }



        return ifs;
       
    }
    friend ostream& operator<<(ostream& os, const vec a) {
        os << "(" << a.begin.x << "," << a.begin.y << ") (" << a.end.x << "," << a.end.y << ")" << endl;
        return os;
    }
    double dlina() {
        return sqrt((end.x - begin.x) * (end.x - begin.x) + (end.y - begin.y) * (end.y - begin.y));
    }
};

int main()
{
    vec vector1(4, 9, 10, 14);
    vec vector5();
    vec  vector2(10, 14, 20, 20);
    //cout << (vector1 + vector2) << endl << (vector1 - vector2) << endl << (vector1 * 4) << endl << (vector1 / 4);
    //vector5;
    cin >> vector1;
    cout << vector1;
}
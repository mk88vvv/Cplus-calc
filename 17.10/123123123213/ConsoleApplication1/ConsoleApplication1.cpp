// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Задайте пароль\n";
    int a,b;
    char d;
    bool c=false, e=true;
    cin >> a;

    //3 попытки
    while (e) {

        for (int i = 0; i < 3; i++) {
            cin >> b;
            if (b == a) {
                c = true;
                break;
            }
        }
        if (c) {    
            cout << "Вы успешно выполнили вход";
            e = !e;
        }
        else {
            cout << "Вы превысили лимит попыток; Попробуете еще раз?(Y/N)\n";
            cin >> d;
            if (d == 'N') {
                e = !e;
            }
        }
    }
    return 0;


}


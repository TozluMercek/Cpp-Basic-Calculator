#include <iostream>
using namespace std;

// Sadece % operatörü çalýþmýyor, sorunu çözemedim.


int main() {
    char operation;
    double num1, num2;


    while (true) {
        cout << "Isleminiz? (Orn: 4 + 5): ";
        cin >> num1 >> operation >> num2;

        if (operation == '+') {
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            continue;
        }
        else if (operation == '-') {
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            continue;
        }
        else if (operation == '*') {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            continue;
        }
        else if (operation == '/') {
            if (num2 == 0) {
                cout << "Bir sayiyi sifira bolemezsiniz" << endl;
            }
            else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            continue;
        }
        else if (operation == ' % ') {
            if (num2 == 0) {
                cout << "Sýfýra bolunmez";
            }
            else {
                cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2 << endl;
            }
            continue;
        }
        else {
            cout << "Hatali islem turu girdiniz. Lutfen tekrar deneyiniz." << endl;
        }

        break;

    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    // memasukkan tipe data
    float a,b,hasil;
    char aritmatika;

    cout << "Halo, selamat datang di program calculator sederhana saya \n \n";

    // masukkan input dari user
    cout << "masukkan nilai pertama: ";
    cin >> a;

    cout << "pilih operator (+, -, *, /): ";
    cin >> aritmatika;

    cout << "masukkan nilai kedua: ";
    cin >> b;

    cout << "hasil perhitungan: ";
    cout << a << aritmatika << b;

    // buat if statement
    if (aritmatika == '+') {
        hasil = a + b;
    }
    if (aritmatika == '-') {
        hasil = a - b;
    }
    if (aritmatika == '*') {
        hasil = a * b;
    }
    if (aritmatika == '/') {
        hasil = a / b;
    }

    cout << "=" << hasil << endl;


    return 0;
}

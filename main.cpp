#include <iostream>

using namespace std;

int main() {
    long long bilangan;

    cout << "=== Program Cek Bilangan Genap / Ganjil ===" << endl;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    // Menentukan genap atau ganjil menggunakan operator modulo (%)
    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan GENAP." << endl;
    } else {
        cout << bilangan << " adalah bilangan GANJIL." << endl;
    }

    return 0;
}

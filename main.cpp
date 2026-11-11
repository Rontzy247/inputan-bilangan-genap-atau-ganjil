#include <iostream>

using namespace std;

int main() {
    long long bilangan;
    char pilihan;

    do {
        cout << "\n=== Program Cek Bilangan Genap / Ganjil ===" << endl;
        cout << "Masukkan sebuah bilangan bulat: ";
        cin >> bilangan;

        // Pengecekan modulo
        if (bilangan % 2 == 0) {
            cout << "Hasil: " << bilangan << " adalah bilangan GENAP." << endl;
        } else {
            cout << "Hasil: " << bilangan << " adalah bilangan GANJIL." << endl;
        }

        // Konfirmasi perulangan
        cout << "Apakah ingin memeriksa angka lain? (y/Y) ingin mengakhiri klik enter: ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "\nProgram selesai. Terima kasih!" << endl;

    return 0;
}

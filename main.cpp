#include <iostream>

using namespace std;

int main() {
    int bilangan;
    string pilihan;

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
        cout << "Apakah ingin memeriksa angka lain? (y/Y) jika ingin mengakhiri ketik (end)/ huruf selain (y/Y): ";
        cin >> pilihan;

    } while (pilihan == "y" || pilihan == "Y");
    cout << "\nProgram selesai. Terima kasih!" << endl;
    
    system("pause");
    return 0;
}

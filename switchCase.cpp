#include <iostream>
using namespace std;

int kodeJurusan;
string namaJurusan;
string statusKuota;

void input() {
    cout << "=== Pendaftaran Jurusan Kampus ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}
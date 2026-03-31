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

void PilihJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 kursi) ";
            break;
        case 2:
            namaJurusan = "Teknik Elektro";
            statusKuota = "Kuota Penuh";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 kursi) ";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}
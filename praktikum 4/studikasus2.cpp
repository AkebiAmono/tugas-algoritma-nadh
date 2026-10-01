//Deskripsi Soal:
//Buat program yang menerima input jumlah kehadiran mahasiswa selama satu minggu (5 hari). Program akan menghitung
//dan menampilkan persentase kehadiran mahasiswa, kemudian memberikan status sebagai berikut:
//"Kehadiran Baik" jika persentase kehadiran lebih dari 75%.
//"Kehadiran Cukup" jika persentase kehadiran antara 50% - 75%.
//"Kehadiran Kurang" jika persentase kehadiran kurang dari 50%
//Output yang Diharapkan: Tampilkan persentase kehadiran dan status kehadiran mahasiswa.

#include <iostream>
using namespace std;

int main() {
    int lanjut = 1;

    while (lanjut == 1) {
        int totalHadir = 0;
        int hadir;

        for (int hari = 1; hari <= 5; hari++) {
            cout << "Apakah mahasiswa hadir di hari ke-" << hari
                 << "? (1 untuk hadir, 0 untuk tidak): ";
            cin >> hadir;

            totalHadir += hadir;
        }

        int persentase = (totalHadir * 100) / 5;

        cout << "Persentase Kehadiran: " << persentase << "%" << endl;

        if (persentase > 75) {
            cout << "Status Kehadiran: Baik" << endl;
        }
        else if (persentase >= 50) {
            cout << "Status Kehadiran: Cukup" << endl;
        }
        else {
            cout << "Status Kehadiran: Kurang" << endl;
        }

        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? "
             << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> lanjut;
    }

    return 0;
}
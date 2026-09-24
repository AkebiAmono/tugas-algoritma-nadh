//Deskripsi:
//Buat program yang menerima input lima angka dari pengguna, lalu menghitung nilai rata-rata dan standar deviasi dari
//angka-angka tersebut, dan menampilkan hasil dengan format desimal yang rapi.
//Modifikasi: Menilai apakah angka-angka tersebut memiliki variasi yang tinggi atau rendah berdasarkan nilai standar deviasi.
//Jika standar deviasi lebih dari 2, tampilkan "Variasi Tinggi".Jika standar deviasi kurang dari atau sama dengan 2, tampilkan
//"Variasi Rendah".

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int a, b, c, d, e, tot;
    double rata, dev;

    cout << "Masukkan Angka 1 : ";
    cin >> a;

    cout << "Masukkan Angka 2 : ";
    cin >> b;

    cout << "Masukkan Angka 3 : ";
    cin >> c;

    cout << "Masukkan Angka 4 : ";
    cin >> d;

    cout << "Masukkan Angka 5 : ";
    cin >> e;

    tot = a + b + c + d + e;
    rata = (double)tot / 5;

    dev = sqrt(
        ((a - rata) * (a - rata) +
         (b - rata) * (b - rata) +
         (c - rata) * (c - rata) +
         (d - rata) * (d - rata) +
         (e - rata) * (e - rata)) / 5
    );

    cout << "--------------------------------" << endl;
    cout << "Rata-Rata: " << fixed << setprecision(2) << rata << endl;
    cout << "Deviasi: " << fixed << setprecision(2) << dev << endl;

    if (dev > 2) {
        cout << "Variasi: Variasi Tinggi" << endl;
    }
    else {
        cout << "Variasi: Variasi Rendah" << endl;
    }

    return 0;
}
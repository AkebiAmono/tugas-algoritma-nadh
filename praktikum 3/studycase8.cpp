//Deskripsi:
//Buat program yang menerima input panjang, lebar, dan tinggi ruangan dalam meter. Program harus menghitung luas
//permukaan total dinding ruangan, jumlah liter cat yang dibutuhkan (dengan asumsi 1 liter cat dapat mengecat 10 m²), dan
//total biaya untuk membeli cat berdasarkan harga per liter. Program akan menampilkan hasil dengan format desimal dua
//digit.
//Modifikasi: Memberikan informasi tambahan tentang kategori jumlah cat yang dibutuhkan. Jika jumlah cat lebih dari 10 liter,
//tampilkan "Banyak Cat Dibutuhkan". Jika jumlah cat antara 5 hingga 10 liter, tampilkan "Sedang". Jika jumlah cat kurang dari
//5 liter, tampilkan "Sedikit".

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float p, l, t, lp, litc, total_harga_cat;
    int hc;

    cout << left << setw(35) << "Masukkan Panjang Ruangan (meter)" << ": ";
    cin >> p;

    cout << left << setw(35) << "Masukkan Lebar Ruangan (meter)" << ": ";
    cin >> l;

    cout << left << setw(35) << "Masukkan Tinggi Ruangan (meter)" << ": ";
    cin >> t;

    cout << left << setw(35) << "Masukkan Harga Cat per Liter" << ": ";
    cin >> hc;

    lp = 2 * (l * p + t * p + l * t);
    litc = lp / 10;
    total_harga_cat = litc * hc;

    cout << "-------------------------------------------------" << endl;

    cout << setw(25) << "Luas Dinding" << ": "
         << fixed << setprecision(2) << lp << " m^2" << endl;

    cout << setw(25) << "Jumlah Liter Cat" << ": "
         << fixed << setprecision(2) << litc << " liter" << endl;

    cout << setw(25) << "Total Biaya Cat" << ": Rp "
         << fixed << setprecision(2) << total_harga_cat << endl;

    if (litc > 10) {
        cout << setw(25) << "Kategori Cat" << ": Banyak Cat Dibutuhkan" << endl;
    }
    else if (litc >= 5 && litc <= 10) {
        cout << setw(25) << "Kategori Cat" << ": Sedang" << endl;
    }
    else {
        cout << setw(25) << "Kategori Cat" << ": Sedikit" << endl;
    }

    return 0;
}
//Deskripsi:
//Buat program yang menerima input jarak tempuh (dalam km), konsumsi bahan bakar per km, dan harga bahan bakar per
//liter. Program harus menghitung total biaya bahan bakar untuk perjalanan dan menampilkannya dengan format mata uang.
//Modifikasi: Memberikan deskripsi tentang efisiensi bahan bakar. Jika konsumsi bahan bakar lebih dari 15 km/l, tampilkan
//"Efisien".Jika konsumsi bahan bakar antara 10 km/l dan 15 km/l, tampilkan "Cukup Efisien".Jika konsumsi bahan bakar
//kurang dari 10 km/l, tampilkan "Boros".

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double jarak, bahanbakar;
    int harga = 10000;

    cout << "Masukkan jarak tempuh: ";
    cin >> jarak;

    cout << "Konsumsi bahan bakar (km/l): ";
    cin >> bahanbakar;

    double total = (jarak / bahanbakar) * harga;

    cout << fixed << setprecision(2);
    cout << "Total biaya bahan bakar: Rp. " << total << endl;

    if (bahanbakar > 15) {
        cout << "Efisiensi bahan bakar: Efisien" << endl;
    }
    else if (bahanbakar >= 10 && bahanbakar <= 15) {
        cout << "Efisiensi bahan bakar: Cukup Efisien" << endl;
    }
    else {
        cout << "Efisiensi bahan bakar: Boros" << endl;
    }

    return 0;
}
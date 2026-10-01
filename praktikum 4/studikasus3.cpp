//Deskripsi Soal:
//Buat program yang menerima input penggunaan listrik dalam kWh selama sebulan. Program akan menghitung total tagihan
//berdasarkan tarif:
//Rp1.500 per kWh untuk penggunaan hingga 100 kWh.
//Rp2.000 per kWh untuk penggunaan antara 101 kWh dan 300 kWh.
//Rp3.000 per kWh untuk penggunaan di atas 300 kWh.
//Jika total tagihan di atas Rp1.000.000, berikan diskon 10% dari total tagihan.
//Output yang Diharapkan: Tampilkan total penggunaan listrik dalam kWh, total tagihan sebelum diskon, diskon yang diberikan
//(jika ada), dan total tagihan setelah diskon.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float kwh;
    float tarifbln;
    float diskon;
    float trfdiskon;
    int tagihan_tambahan;

     do {
        cout << "Masukkan penggunaan listrik (kwh): ";
        cin >> kwh;

        if (kwh > 0 && kwh <= 100) {
            tarifbln = kwh * 1500;
        }

        if (kwh > 100 && kwh <= 300) {
            tarifbln = kwh * 2000;
        }

        if (kwh > 300) {
            tarifbln = kwh * 3000;
        }

        diskon = 0;

        if (tarifbln > 1000000) {
            diskon = tarifbln * 0.10;
        }

        trfdiskon = tarifbln - diskon;

        cout << fixed << setprecision(2);

        if (kwh > 0) {
            cout << "Total Penggunaan Listrik: "
                 << kwh << " kWh" << endl;

            cout << "Total Tagihan Sebelum Diskon: Rp "
                 << tarifbln << endl;

            cout << "Diskon: Rp "
                 << diskon << endl;

            cout << "Total Tagihan Setelah Diskon: Rp "
                 << trfdiskon << endl;
        }

        cout << "Ingin menghitung tagihan untuk penggunaan lain? ";
        cout << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> tagihan_tambahan;

    } while (tagihan_tambahan == 1);

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

    int main() {
//Dklarasi
        int jumlahBarang, tawaranBerulang;
        double hargaBarang, totalHarga = 0, diskonBarang = 0, totalSetelahDiskon = 0;

        //Awalan
        do {
            cout << "Masukkan jumlah barang: ";
            cin >> jumlahBarang;

            totalHarga = 0;

            //Perulangan
            for (int i = 0; i < jumlahBarang; i++) {
                cout << "Masukkan harga barang ke-" << i + 1 << ": Rp ";
                cin >> hargaBarang;

                totalHarga += hargaBarang;
            }

            //Diskon pertama
            if (totalHarga > 500000) {
                diskonBarang = totalHarga * 0.1;
            }
            //Diskon kedua
            else if (totalHarga >= 250000 && totalHarga <= 500000) {
                diskonBarang = totalHarga * 0.05;
            }
            //Tidak ada diskon
            else {
                diskonBarang = 0;
            }

            //Hitungan
            totalSetelahDiskon = totalHarga - diskonBarang;
            cout << fixed << setprecision(2);

            //Output
            cout << "Total Harga: " << totalHarga << endl;
            cout << "Diskon: " << diskonBarang << endl;
            cout << "Total Setelah Diskon: " << totalSetelahDiskon << endl;
            cout << "Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): ";
            cin >> tawaranBerulang;
        } while (tawaranBerulang == 1);

        return 0;
    }

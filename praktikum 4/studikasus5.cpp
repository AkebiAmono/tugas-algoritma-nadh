//Deskripsi Soal:
//Buat program yang memungkinkan pengguna untuk mencatat pengeluaran terbesar harian selama seminggu (7 hari). Setiap
//pengeluaran memiliki kategori (Makanan, Transportasi, Hiburan, Lain-lain), satu hari satu kategori pengeluaran. Program
//akan menghitung total pengeluaran per kategori dan menampilkan pengeluaran terbesar serta kategori dengan pengeluaran
//terbanyak. Contoh:
//Hari 1: terbesar adalah Makanan jumlah pengeluaran Rp50.000.
//Hari 2: terbesar adalah Transportasi jumlah pengeluaran Rp20.000.
//....dan seterusnya.
//Output yang Diharapkan: Tampilkan total pengeluaran per kategori, pengeluaran terbesar secara keseluruhan dan
//kategorinya, dan total pengeluaran terbesar selama seminggu.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int ulang = 1;

    do {
        double totalMakanan = 0;
        double totalTransportasi = 0;
        double totalHiburan = 0;
        double totalLainnya = 0;

        double pengeluaranTerbesar = 0;
        string kategoriPengeluaranTerbesar = "";

        for (int i = 1; i <= 7; ++i) {
            int kategori;
            double jumlah;

            cout << "\nHari ke-" << i << endl;
            cout << "Pilih kategori pengeluaran:" << endl;
            cout << "1. Makanan" << endl;
            cout << "2. Transportasi" << endl;
            cout << "3. Hiburan" << endl;
            cout << "4. Lain-lain" << endl;
            cout << "Masukkan kategori (1-4): ";
            cin >> kategori;

            cout << "Masukkan jumlah pengeluaran: Rp ";
            cin >> jumlah;

            if (kategori == 1) {
                totalMakanan += jumlah;

                if (jumlah > pengeluaranTerbesar) {
                    pengeluaranTerbesar = jumlah;
                    kategoriPengeluaranTerbesar = "Makanan";
                }
            }
            else if (kategori == 2) {
                totalTransportasi += jumlah;

                if (jumlah > pengeluaranTerbesar) {
                    pengeluaranTerbesar = jumlah;
                    kategoriPengeluaranTerbesar = "Transportasi";
                }
            }
            else if (kategori == 3) {
                totalHiburan += jumlah;

                if (jumlah > pengeluaranTerbesar) {
                    pengeluaranTerbesar = jumlah;
                    kategoriPengeluaranTerbesar = "Hiburan";
                }
            }
            else if (kategori == 4) {
                totalLainnya += jumlah;

                if (jumlah > pengeluaranTerbesar) {
                    pengeluaranTerbesar = jumlah;
                    kategoriPengeluaranTerbesar = "Lain-lain";
                }
            }
            else {
                cout << "Kategori tidak valid!" << endl;
            }
        }

        double totalSeminggu = totalMakanan + totalTransportasi
                             + totalHiburan + totalLainnya;

        cout << fixed << setprecision(2);
        cout << "\n===== HASIL PENGELUARAN SELAMA SEMINGGU =====" << endl;
        cout << "Total Pengeluaran Makanan: Rp " << totalMakanan << endl;
        cout << "Total Pengeluaran Transportasi: Rp " << totalTransportasi << endl;
        cout << "Total Pengeluaran Hiburan: Rp " << totalHiburan << endl;
        cout << "Total Pengeluaran Lainnya: Rp " << totalLainnya << endl;

        cout << "Total Pengeluaran Selama Seminggu: Rp "
             << totalSeminggu << endl;

        cout << "Pengeluaran Terbesar: Rp "
             << pengeluaranTerbesar
             << " pada kategori "
             << kategoriPengeluaranTerbesar << endl;

        cout << "\nIngin mencatat pengeluaran untuk minggu lain? "
             << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> ulang;

        cout << endl;

    } while (ulang == 1);

    return 0;
}
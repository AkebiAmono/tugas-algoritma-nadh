#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pilihan;
    float panjang, lebar, tinggi, sisi, jari_jari;
    float volume, luas_permukaan;
    float pi = 3.14;

    cout << "===== PILIH BANGUN RUANG =====" << endl;
    cout << "1. Balok" << endl;
    cout << "2. Tabung" << endl;
    cout << "3. Kubus" << endl;
    cout << "4. Kerucut" << endl;

    cout << "\nPilih bangun ruang (1-4): ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\nPanjang: ";
        cin >> panjang;
        cout << "Lebar: ";
        cin >> lebar;
        cout << "Tinggi: ";
        cin >> tinggi;

        volume = panjang * lebar * tinggi;
        luas_permukaan = 2 * ((panjang * lebar) +
                              (panjang * tinggi) +
                              (lebar * tinggi));

        cout << "\n===== HASIL BALOK =====" << endl;
        cout << "Volume          : " << fixed << setprecision(2)
             << volume << endl;
        cout << "Luas Permukaan  : " << fixed << setprecision(2)
             << luas_permukaan << endl;
    }

    else if (pilihan == 2) {
        cout << "\nJari-jari: ";
        cin >> jari_jari;
        cout << "Tinggi: ";
        cin >> tinggi;

        volume = pi * jari_jari * jari_jari * tinggi;
        luas_permukaan = 2 * pi * jari_jari *
                         (jari_jari + tinggi);

        cout << "\n===== HASIL TABUNG =====" << endl;
        cout << "Volume          : " << fixed << setprecision(2)
             << volume << endl;
        cout << "Luas Permukaan  : " << fixed << setprecision(2)
             << luas_permukaan << endl;
    }

    else if (pilihan == 3) {
        cout << "\nSisi: ";
        cin >> sisi;

        volume = sisi * sisi * sisi;
        luas_permukaan = 6 * sisi * sisi;

        cout << "\n===== HASIL KUBUS =====" << endl;
        cout << "Volume          : " << fixed << setprecision(2)
             << volume << endl;
        cout << "Luas Permukaan  : " << fixed << setprecision(2)
             << luas_permukaan << endl;
    }

    else if (pilihan == 4) {
        cout << "\nJari-jari: ";
        cin >> jari_jari;
        cout << "Tinggi: ";
        cin >> tinggi;

        float garis_pelukis;
        cout << "Garis pelukis: ";
        cin >> garis_pelukis;

        volume = (1.0 / 3.0) * pi * jari_jari *
                 jari_jari * tinggi;

        luas_permukaan = pi * jari_jari *
                         (jari_jari + garis_pelukis);

        cout << "\n===== HASIL KERUCUT =====" << endl;
        cout << "Volume          : " << fixed << setprecision(2)
             << volume << endl;
        cout << "Luas Permukaan  : " << fixed << setprecision(2)
             << luas_permukaan << endl;
    }

    else {
        cout << "Pilihan bangun ruang tidak tersedia." << endl;
    }

    return 0;
}
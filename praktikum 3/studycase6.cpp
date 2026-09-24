//Deskripsi:
//Buat program yang menerima input suhu harian selama 5 hari berturut-turut dan menghitung rata-rata suhu. Program harus
//menampilkan setiap input suhu dan rata-rata akhir dengan presisi satu digit desimal.
//Modifikasi: Menentukan jika rata-rata suhu lebih dari 30.0°C, tampilkan "Cuaca Panas".Jika rata-rata suhu antara 20.0°C
//hingga 30.0°C, tampilkan "Cuaca Normal".Jika rata-rata suhu kurang dari 20.0°C, tampilkan "Cuaca Dingin".
#include <iostream>
#include <iomanip>


using namespace std;


int main() {


    double h1;
    double h2;
    double h3;
    double h4;
    double h5;
     cout << "Suhu hari pertama :";
     cin >> h1;
     cout << "Suhu hari kedua :";
     cin >> h2;
     cout << "Suhu hari ketiga :";
     cin >> h3;
     cout << "Suhu hari keempat :";
     cin >> h4;
     cout << "Suhu hari kelima :";
     cin >> h5;


    double average_suhu = (h1 + h2 + h3 + h4 + h5) /5;
    cout << "Rata-rata suhu: " << fixed << setprecision(1) << average_suhu << endl;
   
     if (average_suhu > 30.0) {
        cout << "Cuaca Panas" << endl;
    }
    else if (average_suhu >= 20.0 && average_suhu <= 30.0) {
        cout << "Cuaca Normal" << endl;
    }
    else {
        cout << "Cuaca Dingin" << endl;
    }

}


//studycase5
//Deskripsi:
//Buat program untuk menghitung BMI seseorang berdasarkan berat badan dan tinggi badan. Program juga harus menentukan
//apakah berat badan seseorang sesuai dengan rentang berat badan ideal (Body Mass Index/BMI) antara 18,5 - 24,9.

//Modifikasi: Menentukan kategori BMI, kurang dari 18,5 berarti berat badan kurang (underweight). Antara 18,5 - 24,9 berarti
//berat badan normal. Antara 25-29,9 berarti berat badan berlebih (overweight). Di atas 30 berarti obesitas.
#include <iostream>
using namespace std;

int main () {
    double tinggi;
    double berat;
    double BMI;
    double convert_tinggi;
    
    cout << "Berat Badan:";
    cin >> berat;
    cout << "Tinggi Badan:";
    cin >> tinggi;

    convert_tinggi = tinggi/100;

    BMI = berat/(convert_tinggi*convert_tinggi);

    if (BMI < 18.5) {
        cout << "berat badan kurang (underweight)";
    } else if(BMI < 24.9) {
        cout << "berat badan normal";
    } else if(BMI < 29.9) {
        cout << "berat badan berlebih (overweight)";
    } else if(BMI > 30) {
        cout << "anda obesitas";
    }

    return 0;
}
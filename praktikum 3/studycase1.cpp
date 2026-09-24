#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string nama;
    int posisi;
    int tarif;
    int jamKerja;
    int GajiTotal;

    cout << "==== Data Karyawan ====" << endl;

    cout << "Nama Karyawan : ";
    cin >> nama;

    cout << "Kode posisi :";
    cin >> posisi;

    cout << "Jam Kerja :";
    cin >> jamKerja;

    //menetukan tarif berdasarkan posisi
    if (posisi == 1){
        tarif = 15000;
    } else if (posisi == 2){
        tarif = 25000;
    } else if (posisi == 3){
        tarif = 35000;
    } 

    GajiTotal=jamKerja*tarif;

    cout << "============================================================================" <<endl;
    cout << setw(10) << "nama" << setw(15) << "Posisi"<< setw(15) << "Jam Kerja" << setw(18) << "Tarif/Jam" << setw(17) << "Gaji Total" << endl;
    cout << "============================================================================" <<endl;
    cout << setw(10) << nama << setw(15) << posisi << setw(15) << jamKerja << setw(18) << tarif << setw(17) << GajiTotal << endl; 
    cout << "============================================================================" <<endl;

    //cout << "Jadi gaji total nya adalah " << GajiTotal << endl;

    return 0;

}
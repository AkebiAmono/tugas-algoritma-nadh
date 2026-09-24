#include <iostream> 
#include <iomanip> 
using namespace std; 

int main(){ 
    string nm; 
    int jm, gj, trf; 

    cout << "Nama Karyawan: "; 
    cin >> nm; 
    cout << "Jam Kerja: "; 
    cin >> jm; 
    cout << "Tarif perjam: "; 
    cin >> trf; 

    gj = jm*trf; 

    cout << setw(10) << "nama" << setw(15) << "Jam Kerja" << setw(18) << "Tarif per Jam" << setw(17) << "Gaji Total" << endl; 
    cout << setfill('-') << setw(60) << "" << endl; 
    cout << setfill(' '); 
    cout << setw(10) << nm << setw(15) << jm << setw(18) << trf << setw(17) << gj << endl; 

    return 0; 

} 
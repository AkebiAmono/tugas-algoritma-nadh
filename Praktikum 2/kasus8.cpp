#include <iostream> 
#include <iomanip> 
using namespace std; 

int main(){ 
float p, l, t, lp, litc, kaleng_cat, total_harga_cat; 
int hc; 

    cout << left << setw(17) << "Masukkan Panjang Ruangan (meter)" << setw(2) << ": "; 
    cin >> p; 
    cout << left << setw(17) << "Masukkan Lebar Ruangan (meter)" << setw(2) << ": "; 
    cin >> l; 
    cout << left << setw(17) << "Masukkan Tinggi Ruangan (meter)" << setw(2) << ": "; 
    cin >> t; 
    cout << left << setw(17) << "Masukkan Harga Cat" << setw(2) << ": "; 
    cin >> hc; 

    lp = 2*(l*p+t*p+l*t); 
    kaleng_cat = lp / 10; 
    litc = lp / 10; 
    total_harga_cat = kaleng_cat*hc; 
    cout << "-------------------------------------------------" << endl; 
    cout << setw(17) << "Luas Dinding" << setw(2) << ": " << fixed << setprecision(2) << lp << " m^2" << endl; 
    cout << setw(17) << "Jumlah Liter Cat" << setw(2)<< ": " << fixed << setprecision(2) << litc << " liter" << endl; 
    cout << setw(17) << "Total Biaya Cat" << setw(2) << ": " << "Rp " << fixed << setprecision(2) << total_harga_cat << endl; 

    return 0; 

} 
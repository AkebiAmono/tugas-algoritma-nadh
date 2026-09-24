#include <iostream> 
#include <iomanip> 
using namespace std; 

int main(){ 
float hb, diskon, hd; 
cout << left << setw(20) << "Harga Barang" << setw(1) << ": "; 
cin >> hb; 
cout << left << setw(20) << "Diskon" << setw(1) << ": "; 
cin >> diskon; 

hd =  hb - (hb*diskon / 100); 

cout << left << setw(20) << "Harga Awal" << setw(1) << ": " << "Rp " << fixed << setprecision(2) << hb << endl; 
cout << left << setw(20) << "Diskon" << setw(1) << ": " << fixed << setprecision(1) << diskon << "%"<< endl; 
cout << left << setw(20) << "Harga Setelah Diskon" << setw(1) << ": " << "Rp " << fixed << setprecision(2) << hd << endl; 

return 0; 

} 
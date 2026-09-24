#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
    double jarak, bahanbakar; 
    int harga = 10000; 
    
    cout << "Masukkan jarak tempuh: "; 
    cin >> jarak; 
    cout << "Konsumsi bahan bakar (km/l): "; 
    cin >> bahanbakar; 

    double total = (jarak / bahanbakar) * harga; 
    cout << "Total biaya bahan bakar: " << "Rp. " << 
    fixed << setprecision(2) << total << endl;  

    return 0; }
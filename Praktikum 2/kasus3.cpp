#include <iostream> 

#include <iomanip> 

using namespace std; 

 

int main () { 

   int panjang; 
   int lebar; 
   int tinggi; 
   int alas; 
   int volume; 
   int luas_permukaan; 
   cout << "Panjang: "; 
   cin >> panjang; 
   cout << "Lebar: "; 
   cin >> lebar; 
   cout << "Tinggi: "; 
   cin >> tinggi; 
   alas = panjang * lebar; 
   volume = alas * tinggi; 
   luas_permukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
   cout << endl;

    cout << setw(10) << "Panjang" << setw(10) << "Lebar" << setw(10) << "Tinggi" << setw(10) << "Volume" << setw(20) << "Luas permukaan" << endl; 
    cout << setw(10) << panjang << setw(10) << lebar << setw(10) << tinggi << setw(10) << volume << setw(20) << luas_permukaan << endl; 

     

    return 0; 

} 
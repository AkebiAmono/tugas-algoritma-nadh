#include <iostream>
#include <iomanip>
using namespace std;

int main () {
   int jumlah_rupiah = 1500000;
   float kurs_konversi = 15959.6500;
   double jumlah_dollar = jumlah_rupiah * kurs_konversi;
   cout << "jumlah dollar adalah" << jumlah_dollar << endl;
return 0;
}
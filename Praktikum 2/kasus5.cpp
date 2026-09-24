#include <iostream> 

#include <iomanip> 

using namespace std; 

int main(){ 

float berat, tinggi, t, bmi; 

 

cout << "Height (cm): "; 

cin >> t; 

cout << "weight (kg): "; 

cin >> berat; 

 

tinggi = t/100; 

bmi = berat / (tinggi*tinggi); 

cout << "BMI: " << fixed << setprecision(2) << bmi << endl; 

if (bmi >= 18.5 && bmi <= 24.9) { 

    cout << "Status Berat Badan Ideal : Ya"; 

} else { 

    cout << "Status Berat Badan Ideal : Tidak"; 

} 

    return 0; 

} 
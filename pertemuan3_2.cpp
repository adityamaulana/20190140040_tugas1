#include <iostream>
using namespace std;

double rerata(double hilmy, double joker){
    return (hilmy+joker)/2;
}

string status (double nopal){
    if (nopal >= 69)
        return "Congrats";
    else 
        return "Payah Banget";
}

int main(){
    double Math, Bahasa;
    cout << "Masukkan nilai Math = ";
    cin >> Math;

    cout << "Masukkan nilai Bahasa = ";
    cin >> Bahasa;

    cout << "Predikat = " << status(rerata(Math,Bahasa));

    return 0;
}
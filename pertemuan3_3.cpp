#include <iostream>
using namespace std;

double rerata(double hilmy, double joker){
    return (hilmy+joker)/2;
}

string status(double rata){

    if(rata >= 69)
        return "Congrats";
    else
        return "YOU SUCKS!!!";

}

string status2(double rata, double nilai){

    if (rata >= 69 || nilai >= 69)
        return "BAPAK KAMU PASTI BANGGA SAMA KAMU";
    else
        return "BAPAK KECEWA SAMA KAMU, NAK!";
}

int main(){
    double Math, Bahasa;
    
    cout << "Masukkan nilai Math = ";
    cin >> Math;

    cout << "Masukkan nilai Bahasa = ";
    cin >> Bahasa;

    cout << "Predikat Pertama = " << status(rerata(Math, Bahasa));
    
    cout << "\nPedikat Kedua = " << status2(rerata(Math, Bahasa), Math);

    return 0;
}

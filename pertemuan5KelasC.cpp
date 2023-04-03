#include <iostream>
using namespace std;

struct Mahasiswa {

    string NIM;
    string Name;
    string Address;

    int Age;

};

int main() {

    Mahasiswa mhs1, mhs2;

    mhs1.NIM = "9112001";
    mhs1.Name = "Osama Bin Laden";
    mhs1.Address = "Riyadh, Saudi Arabia";
    mhs1.Age = 66;

    cout << "Insert Your NIM Here : ";
    cin >> mhs2.NIM;

    cout << "Insert Your NAME Here : ";
    cin >> mhs2.Name;

    cout << "Insert Your Addresses Here : ";
    cin >> mhs2.Address;

    cout << "Insert Your Age Here : ";
    cin >> mhs2.Age;

    cout << "\nNIM = " << mhs1.NIM;
    cout << "\nNAMA = " << mhs1.Name;
    cout << "\nALAMAT = " << mhs1.Address;
    cout << "\nUMUR = " << mhs1.Age;

    cout << "\nNIM = " << mhs2.NIM;
    cout << "\nNAMA = " << mhs2.Name;
    cout << "\nALAMAT = " << mhs2.Address;
    cout << "\nUMUR = " << mhs2.Age;
}
#include <iostream>
using namespace std;

struct AlamatDetail 
{
    string Village;
    string City;
};

struct Mahasiswa
{
    string NIM;
    string Name;
    AlamatDetail address;

    int Age;
};

int main()
{
    Mahasiswa mhs;

    cout << "Insert Your NIM Here : ";
    cin >> mhs.NIM;

    cout << "Insert Your Name Here : ";
    cin >> mhs.Name;

    cout << "Insert Your Address Here";
    cout << "\n\tInsert Village : ";
    cin >> mhs.address.Village;

    cout << "\n\tInsert City : ";
    cin >> mhs.address.City;

    cout << "Insert Your Age Here : ";
    cin >> mhs.Age;

    cout << "\n\nNIM = " << mhs.NIM;
    cout << "\nName = " << mhs.Name;
    cout << "\nVillage = " << mhs.address.Village;
    cout << "\nCity = " << mhs.address.City;
    cout << "\nAge = " << mhs.Age;

}

#include <iostream>
using namespace std;

struct AlamatDetail
{
    char Village[15];
    char City[15];
};

struct Mahasiswa
{
    char NIM[12];
    char Name[25];
    AlamatDetail Address;

    int Age;
};

int main()
{
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++) 
    {

        cout << "Insert Your NIM Here : ";
        cin.getline(mhs[i].NIM,12);

        cout << "Insert Your Name Here : ";
        cin.getline(mhs[i].Name,25);

        cout << "Insert Your Address Here";
        cout << "\n\tVillage : ";
        cin.getline(mhs[i].Address.Village,15);

        cout << "\n\tCity : ";
        cin.getline(mhs[i].Address.City,15);

        cout << "Insert Your Age Here : ";
        cin >> mhs[i].Age;

        cin.ignore(1, '\n');
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "\n\nNIM = " << mhs[i].NIM;
        cout << "\nName = " << mhs[i].Name;
        cout << "\nVillage = " << mhs[i].Address.Village;
        cout << "\nCity = " << mhs[i].Address.City;
        cout << "\nAge = " << mhs[i].Age    ;
    }
}
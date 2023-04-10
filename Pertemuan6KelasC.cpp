#include <iostream>
using namespace std;

class Mahasiswa
{
public :
    string Name;
    string NIM;

public : void cetak ()
{
    cout << "NIM = " << NIM;
    cout << "\nName = " << Name;
} 

public : void input ()
{
    cout << "Insert Your NIM Here : " ;
    cin >> NIM;

    cout << "Insert Your Name Here : ";
    cin >> Name;
} 

};

class Matakuliah 
{
    private :
        string Code;
        string StudentName;

        int SKS;

    public :
        void input()
        {
            cout << "\nInsert Your Lecture Codes Here : ";
            cin >> Code;

            cout << "Insert Your Lecture Name Here : ";
            cin >> StudentName;

            cout << "SKS Total : ";
            cin >> SKS;
        }  

        void tampil()
        {
            cout << "\nInsert Your Lecture Codes Here : ";
            cin >> Code;

            cout << "\nInsert Your Lecture Name Here : ";
            cin >> StudentName;

            cout << "\nSKS Total : " << SKS;
        }
};

int main()
{
  Mahasiswa mhs1;
  Matakuliah mk;


  mhs1.cetak();

  mk.input();
  mk.tampil();

}
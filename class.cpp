#include <iostream>
using namespace std;

class Mobil
{ // bikin class harus make uppercase
public:
    string namaMobil;
    string tipeMobil;

private:
    int hargaMobil;

public:
    void inputData()
    {
        cout << "masukkan nama mobil = " << endl;
        cin >> namaMobil;
        cout << "masukkan tipe mobil = " << endl;
        cin >> tipeMobil;
        cout << "masukkan harga mobil = " << endl;
        cin >> hargaMobil;
    }
    void outputData()
    {
        cout << "harga mobil = " << hargaMobil << endl;
    }
};

int main()
{
    Mobil carry;       // cara memanggil class, panggil nama class, habistu dibuat namanya
    carry.inputData(); // kalo method harus dengan kurung buka tutup
    cout << "nama mobil = " << carry.namaMobil << endl;
    cout << "tipe mobil = " << carry.tipeMobil << endl;
    carry.outputData();
}
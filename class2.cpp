#include <iostream>
using namespace std;

class pp
{ // bikin class harus make uppercase
private:
    int panjang, lebar;

public:
    void inputData()
    {
        cout << "masukkan panjangnya = ";
        cin >> panjang;
        cout << "masukkan lebarnya = ";
        cin >> lebar;
    };

private:
    float luas(int p, int i)
    {
        return p * i;
    }

public:
    void outputData()
    {
        cout << "tampilkan luas = " << luas(panjang, lebar) << endl;
    }
};

int main()
{
    pp luasnya;          // cara memanggil class, panggil nama class, habistu dibuat namanya
    luasnya.inputData(); // kalo method harus dengan kurung buka tutup
    luasnya.outputData();
}
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

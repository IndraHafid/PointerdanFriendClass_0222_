// PointerdanFriendClass_0222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class PersegiPanjang
{

public:
    int panjang, lebar;
    int luasPersegiPanjang(int b, int a)
    {
        return a * b;
    }
};

class segitiga
{

public:
    int tinggi,
        alas;

    int luasSegitiga(int a, int t)
    {
        return 0.5 * a * t;
    }
    int hitung(PersegiPanjang p)
    {
        return p.panjang;
    }
};

int main()
{
    PersegiPanjang pp;
    segitiga sg;
    cout << "Masukan Panjang : ";
    cin >> pp.panjang;
    cout << "MAsukan Lebar : ";
    cin >> pp.lebar;
    cout << "Masukan Tinggi : ";
    cin >> sg.tinggi;
    cout << "Masukan Alas : ";
    cin >> sg.alas;
    cout << "Luas Persegi Panjang :" << pp.luasPersegiPanjang(pp.panjang, pp.lebar) << endl;
    cout << "Luas Segitiga :" << sg.luasSegitiga(sg.alas, sg.tinggi) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

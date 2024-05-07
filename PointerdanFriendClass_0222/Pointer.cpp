#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void shownim()
    {
        cout << "nomor induk :" << nim << endl;
    }
};

int main() {
    mahasiswa mhs(1); //Object mhs
    mhs.shownim(); //Member Accsess Operator

    mahasiswa &refmhs = mhs; //Pointer Reference refMhs
    refmhs.nim = 2; //Member Access Operator
    mhs.shownim();

    mahasiswa* pmhs = &mhs; //Pointer Dereference pMhs
    pmhs->nim = 3; //Arrow Pointer
    pmhs->shownim();
    return 0;
}
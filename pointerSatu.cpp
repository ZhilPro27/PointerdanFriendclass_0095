#include<iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1};   // Object mhs
    mhs.showNim();      // Member access operator

    mahasiswa &refMhs = mhs;    //Pointer reference refMhs
    refMhs.nim = 2;             //Member access operator
    refMhs.showNim();

    mahasiswa *pMhs = &mhs; //Pointer dereference pMhs
    pMhs->nim = 3;          //Arrow operator
    pMhs->showNim();
}
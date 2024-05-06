#include<iostream>
using namespace std;

class siswa;
class orang{
    private:
    string nama;

    public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa{
    private:
    int id;
    public:
    void sedId(int pId);
    void displayAll(orang &a);
};
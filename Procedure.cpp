#include <iostream>
using namespace std;

class Hewan {
    private:
    string jeniskelamin;
    public:
    string tipe;
    string umur;
    void inputData(){                                    //MEMBER
            cout <<"jenisKelamin = " << endl;
            cin >> jeniskelamin;
            cout << "Tipe = " << endl;
            cin >> tipe;
            cout << "Umur = " << endl;
            cin >> umur;
    }


    void tampilhewan(){
        cout << "Jenis Kelaminnya adalah " << jeniskelamin << endl;
    }
};




int main() {
    Hewan ambon;                                              //objek
    ambon.inputData();
    cout << "Umurnya adalah " << ambon.umur << endl;
    cout << "Tipenya adalah " << ambon.tipe << endl;
    ambon.tampilhewan();

}
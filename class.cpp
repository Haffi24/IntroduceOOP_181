#include <iostream>
using namespace std;

class lingkaran {
    public:
    double jarijari;
    double luaslingkaran;

    void inputdata(){
        cout <<"Masukan jarijari = " << endl;
        cin >> jarijari;
    }

    double hitungluas (){

        return 3.14 * jarijari * jarijari;
    }


};


int main(){
    lingkaran bulet;
    bulet.inputdata();
    cout << endl;
    cout << "Luasnya adalah = " << bulet.hitungluas() << endl;
    cout << endl;

}

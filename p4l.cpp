#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float t,b;
    float bmi;
    string a;
    cout << "Masukan Tinggi : ";
    cin>>t;
    cout << "Masukan Berat : ";
    cin>>b;
    bmi = b / (t*t);

    // if (nilai<=65){
    //     cout<<"Anda TIDAK Lulus"<<endl;
    // } else {
    //     if (nilai == 100){
    //         cout << "Anda Lulus Dan Anda Hebat" << endl;
    //     } else {
    //         cout << "Anda Lulus" << endl;
    //     }
    // }

    // switch (nilai) {
    //     case 1 :
    //         cout << "SENIN" << endl;
    //         break;
    //     case 2 :
    //         cout << "SELASA" << endl;
    //         break;
    //     case 3 :
    //         cout << "RABU" << endl;
    //         break;
    //     case 4 :
    //         cout << "KAMIS" << endl;
    //         break;
    //     case 5 :
    //         cout << "JUMAT" << endl;
    //         break;
    //     case 6 :
    //         cout << "SABTU" << endl;
    //         break;
    //     case 7 :
    //         cout << "MINGGU" << endl;
    //         break;
    //     default :
    //         cout << "Tidak Valid" << endl;
    //         break;
    // }


    //  switch (nilai) {
    //     case 70 ... 74 :
    //         cout << "C+" << endl;
    //         break;
    //     case 65 ... 69 :
    //         cout << "C" << endl;
    //         break;
    //     case 60 ... 64 :
    //         cout << "C-" << endl;
    //         break;
    //     case 95 ... 100 :
    //         cout << "A" << endl;
    //         break;
    //     case 90 ... 94 :
    //         cout << "A-" << endl;
    //         break;
    //     case 85 ... 89 :
    //         cout << "B+" << endl;
    //         break;
    //     case 80 ... 84 :
    //         cout << "B" << endl;
    //         break;
    //     case 75 ... 79 :
    //         cout << "B-" << endl;
    //         break;
    //     default :
    //         cout << "E" << endl;
    //         break;
    //  }   

    // string ceknum = (nilai % 2== 0) ? "Genap " : "Ganjil";
    // cout << nilai << " Adalah Bilangan " << ceknum << endl;

    if (bmi<18.5) {
        a = "Berat Badan Kurang" ;
    }
    else if (18.5<=bmi<25) {
        a = "Berat Badan Normal" ;
    }
    else if (25<= bmi < 30 ) {
        a = "Berat Badan Berlebih" ;
    }
    else {
        a = "Obesitas";
    }

    cout << "BMI Anda : " << fixed << setprecision(2) << bmi <<endl;
    cout << "Kategori Berat Badan : " << a ;

}

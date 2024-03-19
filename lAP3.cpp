#include<iostream>
using namespace std;
main()
{
    float vol,luas, r;
    const float phi = 3.14;

    cout<<"Masukan Jari-Jari : ";
    cin >> r;


    luas = 4*phi *r*r;
    vol = (4/3)*phi *r*r*r;

    cout<<"Luas : "<< luas <<endl;
    cout<<"Volume : "<< vol <<endl;

    return 0;
}
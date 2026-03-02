#include <iostream>
using namespace std;

float d1, d2;

void ProsedurInput(){
    cout << "Masukan Diagonal 1 : ";
    cin >> d1;
    cout << "Masukan Diagonal 2 : ";
    cin >> d2;
}

float FungsiHitungLuasBerparameter(float a, float b){
    return 0.5 * a * b;
}

void ProsedurOutput(float luas){
    cout << "Luas Belah Ketupat : " << luas;
}

int main()
{
    ProsedurInput();
    ProsedurOutput(FungsiHitungLuasBerparameter(d1, d2));
}
#include <iostream>
#include <string>
using namespace std;
int main(){
    // training for if else conditions
    for (int i = 0; i < 10; i++){
    int penambahan;
    int var1, var2;
    cout << "selamat datang..." << endl;
    cout << "kali ini anda akan bermain tebak angka. Berapakah hasil penjumlahan dari 16 dalam bilangan genap!?" << endl;
    cout << "masukkan nomer pertama anda: " << endl;
    cin >> var1;
    if (var1 == 14 || var1 == 12 || var1 == 8 || var1 == 6 || var1 == 4 || var1 == 2){
            cout << "yap, benar sekali" << endl;
            cout << "sekarang, coba masukkan angka kedua anda: " << endl;
            cin >> var2;
            if (var1 + var2 == 16){
                cout << "yeay, selamat anda telah menyelesaikan permainan ini!" << endl;
            } else {cout << "wah, sepertinya angka yang anda masukkan belum tepat, coba lagi yuk!" << endl;}
    } else {cout << "tolong masukkan bilangan genap!" << endl;}
    }
    return 0;   
}
#include <iostream>
#include "TPMOD05_HEADER.h"

using namespace std;

int main(){
    list L;
    createList_103022330076(L);
    int pilihan;
    pilihan = selectMenu_103022330076();
    while (pilihan != 0) {
        switch(pilihan){
        case 1: {
            int N;
            int data;
            cout << "Jumlah data yang akan ditambahkan: ";
            cin >> N;
            for (int i = 0; i < N; i++){
                cout << "Data baru: ";
                cin >> data;
                address p = createElement_103022330076(data);
                insertLast_103022330076(L, p);
            }
            string status;
            cout << "Kembali ke menu utama? (Y/N): ";
            cin >> status;
            if (status == "Y"){
                break;
            }
            break;
        }
        case 2: {
            showData_103022330076(L);
            string status;
            cout << "Kembali ke menu utama? (Y/N): ";
            cin >> status;
            if (status == "Y"){
                break;
            }
            break;
        }
        case 3: {
            address alamatKecil;
            alamatKecil = findMin_103022330076(L);
            if (alamatKecil != NULL){
                cout << "Alamat data terkecil: " << alamatKecil << endl;
            }
            string status;
            cout << "Kembali ke menu utama? (Y/N): ";
            cin >> status;
            if (status == "Y"){
                break;
            }
            break;
        }
        case 4: {
            int bil;
            cout << "Data yang ingin ditambahkan ditengah: ";
            cin >> bil;
            insertMiddle_103022330076(L, bil);
            string status;
            cout << "Kembali ke menu utama? (Y/N): ";
            cin >> status;
            if (status == "Y"){
                break;
            }
            break;
        }
        case 0:
            break;
        }
        pilihan = selectMenu_103022330076();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}

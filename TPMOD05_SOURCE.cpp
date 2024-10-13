#include "TPMOD05_HEADER.h"

void createList_103022330076(list &L){
    first(L) = NULL;
}
address createElement_103022330076(infotype x){
    address P = new elmList;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertLast_103022330076(list &L, address p){
    if (first(L) == NULL){
        first(L) = p;
    } else {
        address last = first(L);
        while (next(last) != NULL){
            last = next(last);
        }
        next(last) = p;
    }
}

void showData_103022330076(list L){
    if (first(L) == NULL){
        cout << "List kosong" << endl;
    } else {
        address p = first(L);
        while  (p != NULL){
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    }
}

address findMin_103022330076(list L){
    if (first(L) == NULL){
        return NULL;
    }
    address p = first(L);
    address alamatKecil = p;
    int dataKecil = info(p);

    while (next(p) != NULL){
        p = next(p);
        if (info(p) < dataKecil){
            dataKecil = info(p);
            alamatKecil = p;
        }
    }
    return alamatKecil;
}

void insertMiddle_103022330076(list &L, int value){
    int panjang = 0;
    address p = first(L);
    while (p != NULL){
        panjang++;
        p = next(p);
    }

    int tengah = panjang / 2;
    p = first(L);
    for (int i = 0; i < tengah - 1; i++){
        p = next(p);
    }

    address elmBaru = createElement_103022330076(value);
    next(elmBaru) = next(p);
    next(p) = elmBaru;
}

int selectMenu_103022330076(){
    cout << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Alamat dari data yang berisi nilai terkecil" << endl;
    cout << "4. Tambahkan data di tengah list" << endl;
    cout << "0. Exit" << endl;

    int input = 0;
    cin >> input;
    return input;
}

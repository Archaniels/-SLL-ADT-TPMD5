#ifndef TPMOD05_HEADER_H_INCLUDED
#define TPMOD05_HEADER_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define info(P) P->info
#define next(P) P->next

using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList_103022330076(list &L);
address createElement_103022330076(infotype x);
void insertLast_103022330076(list &L, address p);
void showData_103022330076(list L);
address findMin_103022330076(list L);
void insertMiddle_103022330076(list &L, int value);
int selectMenu_103022330076();

#endif // TPMOD05_HEADER_H_INCLUDED

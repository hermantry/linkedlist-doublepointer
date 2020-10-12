#ifndef HERMAN_H_INCLUDED
#define HERMAN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct tElmtList *address;

typedef struct tElmtList {
    infotype Info;
    address Prev;
    address Next;
}ElmtList;

typedef struct {
    address First;
    address Last;
}List;

#define Info(P) (P)->Info
#define Prev(P) (P)->Prev
#define Next(P) (P)->Next

#define First(L) (L).First
#define Last(L) (L).Last

address Alokasi(infotype X);
address Search(List L, infotype X);

boolean ListEmpty(List L);
boolean FSearch(List L, address P);

void CreateList(List *L);

void Dealokasi(address *P);
void DelFirst(List *L, address *P);
void DelLast(List *L, address *P);
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L, infotype *X);

void InsVFirst(List *L, infotype X);
void InsVLast(List *L, infotype X);
void InsertFirst(List *L, address P);
void InsertAfter(List *L, address P, address Prec);
void InsertLast(List *L, address P);

void PrintInfo(List L);

#endif // HERMAN_H_INCLUDED

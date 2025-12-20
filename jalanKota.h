#ifndef JALANKOTA_H
#define JALANKOTA_H

#include <iostream>
using namespace std;

struct Kota;
struct Jalan;
struct Relasi;


struct Relasi {
    Kota* kota;
    Jalan* jalan;
    Relasi* nextKota;
    Relasi* nextJalan;
};


struct Kota {
    string namaKota;
    int jumlahPenduduk;    
    Kota* next;
    Relasi* firstRelasi;
};


struct Jalan {
    string namaJalan;
    string tipeJalan;
    float panjangJalan;    
    Jalan* next;
    Relasi* firstRelasi;
};

struct ListKota {
    Kota* first;
};

struct ListJalan {
    Jalan* first;
};


void initListKota(ListKota &L);
void initListJalan(ListJalan &L);
Kota* createKota(string nama, int penduduk);
Jalan* createJalan(string nama, string tipe, float panjang);
Relasi* createRelasi(Kota* k, Jalan* j);

// insert
void insertFirstKota(ListKota &L, Kota* p);
void insertLastJalan(ListJalan &L, Jalan* p);

// search
Kota* findKota(ListKota L, string nama);
Jalan* findJalan(ListJalan L, string nama);

// relasi
void connectKotaJalan(Kota* k, Jalan* j);

// delete & hitung
void deleteJalanDariKota(Kota* k, string namaJalan);
int countJalanDariKota(Kota* k);

// show
void showAllKotaJalan(ListKota LK);

#endif

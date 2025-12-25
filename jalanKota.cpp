#include "jalanKota.h"

// INIT
void initListKota(ListKota &L) {
    L.first = NULL;
}

void initListJalan(ListJalan &L) {
    L.first = NULL;
}

// CREATE 
Kota* createKota(string nama, int penduduk) {
    Kota* p = new Kota;
    p->namaKota = nama;
    p->jumlahPenduduk = penduduk;
    p->next = NULL;
    p->firstRelasi = NULL;
    return p;
}

Jalan* createJalan(string nama, string tipe, float panjang) {
    Jalan* p = new Jalan;
    p->namaJalan = nama;
    p->tipeJalan = tipe;
    p->panjangJalan = panjang;
    p->next = NULL;
    p->firstRelasi = NULL;
    return p;
}

Relasi* createRelasi(Kota* k, Jalan* j) {
    Relasi* r = new Relasi;
    r->kota = k;
    r->jalan = j;
    r->nextKota = NULL;
    r->nextJalan = NULL;
    return r;
}

// INSERT 
void insertFirstKota(ListKota &L, Kota* p) {
    p->next = L.first;
    L.first = p;
}

void insertLastJalan(ListJalan &L, Jalan* p) {
    if (L.first == NULL) {
        L.first = p;
    } else {
        Jalan* q = L.first;
        while (q->next != NULL)
            q = q->next;
        q->next = p;
    }
}

// SEARCH 
Kota* findKota(ListKota L, string nama) {
    Kota* p = L.first;
    while (p != NULL) {
        if (p->namaKota == nama)
            return p;
        p = p->next;
    }
    return NULL;
}

Jalan* findJalan(ListJalan L, string nama) {
    Jalan* p = L.first;
    while (p != NULL) {
        if (p->namaJalan == nama)
            return p;
        p = p->next;
    }
    return NULL;
}

// RELASI
void connectKotaJalan(Kota* k, Jalan* j) {
    
}

// DELETE CHILD DARI PARENT
void deleteJalanDariKota(Kota* k, string namaJalan) {

}

// HITUNG CHILD
int countJalanDariKota(Kota* k) {

}

// SHOW 
void showAllKotaJalan(ListKota LK) {

}

#include "jalanKota.h"

// INIT
void initListKota(ListKota &L) {
 
}

void initListJalan(ListJalan &L) {
 
}

// CREATE 
Kota* createKota(string nama, int penduduk) {

}

Jalan* createJalan(string nama, string tipe, float panjang) {

}

Relasi* createRelasi(Kota* k, Jalan* j) {

}

// INSERT 
void insertFirstKota(ListKota &L, Kota* p) {

}

void insertLastJalan(ListJalan &L, Jalan* p) {

}

// SEARCH 
Kota* findKota(ListKota L, string nama) {

}

Jalan* findJalan(ListJalan L, string nama) {

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


# Data Jalan Perkotaan

## Deskripsi Singkat

Proyek **Data Jalan Perkotaan** merupakan implementasi struktur data **multi linked-list dengan relasi Many-to-Many (M ke N)**. Sistem ini memodelkan hubungan antara **kota** dan **jalan**, di mana satu kota dapat memiliki banyak jalan, dan satu jalan dapat digunakan di banyak kota.

Proyek ini dibuat untuk memenuhi **Tugas Besar Mata Kuliah Struktur Data**, dengan fokus pada penerapan linked list, pointer, dan relasi data secara terstruktur.

## Tujuan Program

- Menerapkan konsep **multi linked-list**
- Mengelola data kota dan jalan secara terpisah
- Membentuk relasi **Many-to-Many** antara kota dan jalan
- Menyediakan operasi dasar struktur data

## Struktur Data yang Digunakan

### List Kota
- Nama Kota
- Jumlah Penduduk *(Integer)*

### List Jalan
- Nama Jalan
- Tipe Jalan
- Panjang Jalan *(Float)*

### List Relasi
- Pointer ke node Kota
- Pointer ke node Jalan

## Fungsionalitas Program

- ✔ Menambahkan data kota
- ✔ Menambahkan data jalan
- ✔ Menghubungkan kota dan jalan
- ✔ Menampilkan seluruh kota beserta jalan yang dimiliki
- ✔ Menghitung jumlah jalan pada suatu kota
- ✔ Menghapus relasi jalan dari kota tertentu

## Struktur File Program

```
📁 Data-Jalan-Perkotaan
├── kotaJalan.h
├── kotaJalan.cpp
├── main.cpp
└── README.md
```

## Menu Program

```
===== MENU DATA JALAN PERKOTAAN =====
1. Tambah Kota
2. Tambah Jalan
3. Hubungkan Kota dan Jalan
4. Tampilkan Semua Kota & Jalan
5. Hitung Jumlah Jalan di Kota
6. Hapus Jalan dari Kota Tertentu
0. Keluar
```

## Cara Menjalankan Program

```bash
g++ kotaJalan.cpp main.cpp -o hasil
./hasil
```


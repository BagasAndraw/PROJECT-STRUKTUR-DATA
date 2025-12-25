#include "jalanKota.h"

int main() {
    ListKota LK;
    ListJalan LJ;
    initListKota(LK);
    initListJalan(LJ);

    int pilihan;
    string namaKota, namaJalan, tipeJalan;
    int penduduk;
    float panjang;

    do {
        cout << "\n===== MENU DATA JALAN PERKOTAAN =====\n";
        cout << "1. Tambah Kota\n";
        cout << "2. Tambah Jalan\n";
        cout << "3. Hubungkan Kota dan Jalan\n";
        cout << "4. Tampilkan Semua Kota & Jalan\n";
        cout << "5. Hitung Jumlah Jalan di Kota\n";
        cout << "6. Hapus Jalan dari Kota Tertentu\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Nama Kota        : ";
            cin >> namaKota;
            cout << "Jumlah Penduduk  : ";
            cin >> penduduk;
            insertFirstKota(LK, createKota(namaKota, penduduk));
            cout << "Kota berhasil ditambahkan.\n";
            break;

        case 2:
            cout << "Nama Jalan  : ";
            cin >> namaJalan;
            cout << "Tipe Jalan  : ";
            cin >> tipeJalan;
            cout << "Panjang (km): ";
            cin >> panjang;
            insertLastJalan(LJ, createJalan(namaJalan, tipeJalan, panjang));
            cout << "Jalan berhasil ditambahkan.\n";
            break;

        case 3:
            cout << "Nama Kota  : ";
            cin >> namaKota;
            cout << "Nama Jalan : ";
            cin >> namaJalan;

            if (findKota(LK, namaKota) != NULL &&
                findJalan(LJ, namaJalan) != NULL) {

                connectKotaJalan(
                    findKota(LK, namaKota),
                    findJalan(LJ, namaJalan)
                );
                cout << "Relasi berhasil dibuat.\n";
            } else {
                cout << "Kota atau Jalan tidak ditemukan.\n";
            }
            break;

        case 4:
            cout << "\n=== DATA KESELURUHAN ===\n";
            showAllKotaJalan(LK);
            break;

        case 5:
            cout << "Nama Kota: ";
            cin >> namaKota;
            if (findKota(LK, namaKota) != NULL) {
                cout << "Jumlah jalan di kota " << namaKota << " : "
                     << countJalanDariKota(findKota(LK, namaKota)) << endl;
            } else {
                cout << "Kota tidak ditemukan.\n";
            }
            break;

        case 6:
            cout << "Nama Kota  : ";
            cin >> namaKota;
            cout << "Nama Jalan : ";
            cin >> namaJalan;

            if (findKota(LK, namaKota) != NULL) {
                deleteJalanDariKota(findKota(LK, namaKota), namaJalan);
                cout << "Relasi jalan berhasil dihapus dari kota.\n";
            } else {
                cout << "Kota tidak ditemukan.\n";
            }
            break;

        case 0:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 0);

    return 0;
}
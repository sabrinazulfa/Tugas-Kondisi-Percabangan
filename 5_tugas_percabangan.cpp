/*
Sebuah wahana bermain 'Disney Island' akan memberikan tarif sesuai
dengan tinggi dan umur anak dengan ketentuan sebagai berikut:
✓ Umur kurang dari 1 tahun: Tampilkan 'Dilarang masuk'
✓ Umur kurang dari 3 tahun: Rp 30.000. Jika tinggi anak umur 2-3
tahun melebih 70 cm maka tarif akan bertambah 10.000
✓ Umur kurang dari 7 tahun: Rp 40.000. Jika tinggi anak umur 4-7
tahun melebih 120 cm maka tarif akan bertambah 15.000
✓ Umur kurang dari 10 tahun: Rp 50.000. Jika tinggi anak umur 8-10
tahun melebih 150 cm maka tarif akan bertambah 20.000
✓ Umur 10 tahun keatas: Rp 80.000
Tampilkan tarif harga sesuai umur dan tinggi seorang anak
*/
#include <iostream>
using namespace std;

int main() {
    int umur;
    double tinggi, harga;

    // Menerima input dari user
    cout << "Selamat Datang di wahana bermain 'Disney Island' " << endl;
    cout << "Masukkan Umur: ";
    cin >> umur;

     // Validasi input umur dibawah 1 tahun
    if (umur < 1) {
        cout << "Dilarang masuk" << endl;
        return 0;
    }

    cout << "Masukkan Tinggi (cm): ";
    cin >> tinggi;

   if (umur < 3) {
        harga = 30000;
        if (tinggi > 70) {
            harga += 10000;
        }
    }
    else if (umur < 7) {
        harga = 40000;
        if (tinggi > 120) {
            harga += 15000;
        }
    }
    else if (umur < 10) {
        harga = 50000;
        if (tinggi > 150) {
            harga += 20000;
        }
    }
    else {
        harga = 80000;
    }

    // Output tarif harga sesuai dengan umur dan tinggi anak
    cout << "Tarif harga untuk anak dengan umur " << umur << " tahun dan tinggi " << tinggi << " cm adalah Rp " << harga << endl;

    return 0;
}

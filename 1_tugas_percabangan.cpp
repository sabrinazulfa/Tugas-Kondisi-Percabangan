/*
Conan ingin mencari anggota sindikat mafia dari Sicilia. Sindikat tersebut
memiliki berbagai macam pangkat anggota diantaranya:
✓ Don
✓ Underboss
✓ Capo
Untuk mengekspos grup ini, dia akan membuat program yang
menganalisa ciri-ciri seseorang berdasarkan beberapa variabel.
Setelah menganalisa ciri-ciri tersebut,program akan mengeluarkan
output apakah orang tersebut ciri-cirinya mirip dengan salah satu
anggota sindikat mafia dengan pangkat yang disebutkan sebelumnya.
Program akan menerima input sebagai berikut:
✓ Nama (String)
✓ Umur (Number)
✓ Tempat Tinggal (String)
✓ Uang Tabungan dalam dollar (Number)
Berikut ini ciri-ciri dari masing-masing pangkat di dalam sindikat
tersebut. Untuk dicurigai sebagai seorang anggota mafia yang memiliki
[pangkat], orang tersebut harus memenuhi:
Don
-Biasanya berumur diatas 40 tahun
-Tinggal di Nevada, New York, atau Havana
-Tabungannya sudah dipastikan diatas 10 juta dollar
Underboss
-Biasanya berumur 25 - 40 tahun
-Tinggal di New Jersey, Manhattan, atau Nevada
-Tabungannya 1 juta dolar sampai 2 juta dolar tidak kurang tidak lebih
Capo
-Biasanya berumur 18 - 24 tahun
-Tinggal di California, Detroit, atau Boston
-Tabungannya < 1 juta dolar
Setelah menganalisa orang tersebut, program akan mengeluarkan output:
a. Jika dia adalah seorang anggota mafia yang memiliki [pangkat] (salah
satu dari Don, Underboss, Capo)
'[Nama] kemungkinan adalah seorang anggota mafia dengan
[pangkat].'
b. Jika orang tersebut tidak memenuhi syarat-syarat tersebut, maka
program akan mengeluarkan output:
'[Nama] tidak mencurigakan.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, tempat_tinggal, pangkat;
    int umur;
    double tabungan;

    // Menerima input dari user
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Umur: ";
    cin >> umur;
    cout << "Masukkan Tempat Tinggal: ";
    cin.ignore();
    getline(cin, tempat_tinggal);
    cout << "Masukkan Uang Tabungan dalam dollar: ";
    cin >> tabungan;

    // Analisa ciri-ciri orang tersebut
    if (umur > 40 && (tempat_tinggal == "Nevada" || tempat_tinggal == "New York" || tempat_tinggal == "Havana") && tabungan > 10000000) {
    pangkat = "Don";
    }
    else if (umur >= 25 && umur <= 40 && (tempat_tinggal == "New Jersey" || tempat_tinggal == "Manhattan" || tempat_tinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
        pangkat = "Underboss";
    }
    else if (umur >= 18 && umur <= 24 && (tempat_tinggal == "California" || tempat_tinggal == "Detroit" || tempat_tinggal == "Boston") && tabungan < 1000000) {
        pangkat = "Capo";
    }

    // Output hasil analisa
    if (!pangkat.empty()) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan " << pangkat << "." << endl;
    }
    else {
        cout << nama << " tidak mencurigakan." << endl;
    }

    return 0;
}
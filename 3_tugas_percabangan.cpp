/*
Sebuah klub sepak bola “PERSEGI FC” mempunyai aturan dalam
memberikan nomor punggung bagi para pemainnya. Para pemain
diperbolehkan mempunyai posisi lebih dari 1. Berikut adalah beberapa
aturannya:
a. Untuk nomor punggung genap, digunakan untuk posisi “target
attacker”
b. Untuk nomor punggung genap antara 50 – 100, digunakan untuk
pemain yang “berhak dipilih menjadi capten team”
c. Untuk nomor punggung ganjil, digunakan untuk posisi “defender”
d. Untuk nomor punggung ganjil lebih dari 90, digunakan untuk posisi
“Playmaker”
e. Untuk nomor punggung ganjil kelipatan dari 3 dan 5, digunakan untuk
posisi “keeper”
*/

#include <iostream>
using namespace std;

int main() {
    int nomor_punggung;
    char ulang;

    do {
        // Input nomor punggung
        cout << "Masukkan nomor punggung: ";
        cin >> nomor_punggung;

        // Menentukan posisi berdasarkan nomor punggung
        string posisi = "";
        if (nomor_punggung % 2 == 0) {
            // Nomor punggung genap
            if (nomor_punggung >= 50 && nomor_punggung <= 100) {
                posisi = "Capten team";
            } else {
                posisi = "Target attacker";
            }
        } else {
            // Nomor punggung ganjil
            if (nomor_punggung > 90) {
                posisi = "Playmaker";
            } else if (nomor_punggung % 15 == 0) {
                posisi = "Keeper";
            } else {
                posisi = "Defender";
            }
        }

        // Menampilkan nomor punggung dan posisi yang dipilih
        cout << "Anda telah memilih nomor punggung " << nomor_punggung << " dengan posisi " << posisi << endl;

        // Menanyakan apakah ingin mengulang program
        cout << "Apakah ingin memasukkan nomor punggung lain? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}


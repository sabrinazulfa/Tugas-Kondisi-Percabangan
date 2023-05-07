/*
Buatlah program untuk melakukan pengecekan sebuah nomor punggung
dapat berfungsi sebagai posisi apa saja.
Terdapat sebuah jurnal yang menuliskan teorinya bahwa olahraga dapat
membakar kalori yang terkandung dalam tubuh manusia. Hal tersebut
berbanding lurus dengan lama waktu yang dilakukan. Berikut ini adalah
beberapa teori tersebut:
✓ Olahraga lari membakar 60 kalori setiap 5 menit.
✓ Olahraga push-up membakar 200 kalori setiap 30 menit
✓ Olahraga plank membakar 5 kalori selama 1 menit
Buatlah program untuk menghitung berapa jumlah kalori setelah
melakukan aktivitas olahraga tersebut dengan ketentuan setiap orang
boleh melakukan aktivitasnya lebih dari 1
*/

#include <iostream>
#include <vector>

using namespace std;

// fungsi untuk mengecek nomor punggung pemain
void checkJerseyNumber(int num) {
    if (num % 2 == 0) {
        if (num >= 50 && num <= 100) {
            cout << "Posisi: Capten Team\n";
        } else {
            cout << "Posisi: Target Attacker\n";
        }
    } else if (num % 2 == 1) {
        if (num > 90) {
            cout << "Posisi: Playmaker\n";
        } else if (num % 15 == 0) {
            cout << "Posisi: Keeper\n";
        } else {
            cout << "Posisi: Defender\n";
        }
    }
}

// fungsi untuk menghitung jumlah kalori yang terbakar
int calculateCalories(int choice, int duration) {
    switch (choice) {
        case 1:
            return (duration / 5) * 60;
        case 2:
            return (duration / 30) * 200;
        case 3:
            return duration * 5;
        default:
            return 0;
    }
}

int main() {
    int num, choice, duration;
    vector<int> activities;
    char cont;

    do {
        // input nomor punggung pemain
        cout << "Masukkan nomor punggung pemain: ";
        cin >> num;

        // mengecek posisi pemain berdasarkan nomor punggung
        checkJerseyNumber(num);

        // input aktivitas dan durasi
        do {
            cout << "Pilih aktivitas olahraga:\n";
            cout << "1. Lari\n";
            cout << "2. Push-up\n";
            cout << "3. Plank\n";
            cout << "Pilihan: ";
            cin >> choice;
            cout << "Masukkan durasi (dalam menit): ";
            cin >> duration;

            // menambahkan jumlah kalori yang terbakar ke dalam vector
            activities.push_back(calculateCalories(choice, duration));

            cout << "Tambahkan aktivitas lagi? (Y/N) ";
            cin >> cont;
        } while (cont == 'Y' || cont == 'y');

        // menampilkan total kalori yang terbakar
        int totalCalories = 0;
        for (int i = 0; i < activities.size(); i++) {
            totalCalories += activities[i];
        }
        cout << "Total kalori yang terbakar: " << totalCalories << " kalori\n\n";

        // mengosongkan vector untuk pemain berikutnya
        activities.clear();
    } while (false);

    return 0;
}
/*Buatlah sebuah sistem penerimaan calon programmer yang akan
menerima dua nilai ( nilai coding dan nilai interview).

Untuk penilaain test coding skala penilaian yang diberikan dimulai dari 0
hingga 100 dengan sistem penilaian

✓ ketika seseorang mendapatkan nilai lebih dari 80 maka peserta
tersebut akan mendapatkan hasil tes LOLOS,
✓ ketika sesorang mendapatkan nilai diantara 60 hingga 80 maka
peserta tersebut mendapatkan hasil tes DIPERTIMBANGKAN,
✓ ketika seseorang mendapatkan nilai dibawah 60 maka peserta tersebut
mendapatkan hasil tes GAGAL.
Sedangkan untuk penilaian interview adalah
✓ ketika nilai yang diberikan kepada seseorang tersebut adalah "A" atau
"B" maka peserta tersebut dianggap LOLOS interview,
✓ selain kedua nilai tersebut maka peserta dianggap GAGAL tes
interview.
Ketika calon programmer mendapatkan nilai coding LOLOS atau
DIPERTIMBANGKAN dan juga LOLOS test interview maka tampilkanlah
pesan "Selamat Kamu Berhasil Menjadi Calon Programmer". Jika tidak
maka tampilkanlah pesan "Maaf Kamu Belum Berhasil Menjadi Calon
Programmer"
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int nilaiCoding;
    char nilaiInterview;
    string interview, hasilCoding, hasilInterview;

    cout << "Masukkan Nilai Coding: ";
    cin >> nilaiCoding;
    cout << "Masukkan Nilai Interview: ";
    cin >> nilaiInterview;

    // penilaian coding
    if (nilaiCoding > 80)
    {
        hasilCoding = "LOLOS";
    }
    else if (nilaiCoding <= 80 && nilaiCoding >= 60)
    {
        hasilCoding = "DIPERTIMBANGKAN";
    }
    else if (nilaiCoding < 60)
    {
        hasilCoding = "GAGAL";
    }
    
    // penilaian interview
    if (nilaiInterview == 'A' || nilaiInterview == 'B')
    {
        hasilInterview = "LOLOS";
    }
    else {
        hasilInterview = "GAGAL";
    }
    
    // HASIL AKHIR
    if ((hasilCoding == "LOLOS" || hasilCoding == "DIPERTIMBANGKAN") && hasilInterview == "LOLOS" )
    {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    }
    else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }
}
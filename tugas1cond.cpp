/*
Nama Program : Hitung Nilai Indeks
Nama         : Andreas Teguh Santoso Kosasih
NPM          : 140810230047
Tanggal Buat : Minggu, 18 September 2023
Deskripsi    : Mengkonversi nilai ujian mahasiswa menjadi indeks berdasarkan rentang - rentang nilai ujian yang sudah ditentukan
*/

#include <iostream>
using namespace std; 

const int N_max = 1000000; 
typedef float arrayNilai[N_max];
typedef char arrayIndeks[N_max];

void HitungNilaiIndex(arrayNilai nilaiUjian, int N, arrayIndeks indeks);

int main () {
    int N; cout << "Masukkan Jumlah Mahasiswa: "; cin >> N; // N <= 1000000
    arrayNilai nilaiUjian;
    arrayIndeks indeks;

    for (int i = 1; i <= N; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << i << ": "; cin >> nilaiUjian[i];
    }

    HitungNilaiIndex(nilaiUjian, N, indeks); 
    
    cout << "----------------------------------" << endl; 
    cout << "  Nilai Ujian\t" << "         Indeks" << endl;
    cout << "----------------------------------" << endl; 
    for (int i = 1; i <= N; i++) {
        cout << "Nilai ke-" << i << ": " << nilaiUjian[i] << "\t \t" << "Indeks: " << indeks[i] << endl;
    }
    cout << "----------------------------------" << endl; 

    return 0;
}

void HitungNilaiIndex(arrayNilai nilaiUjian, int N, arrayIndeks indeks) {
    for(int i = 1; i <= N; i++) {
        if (nilaiUjian[i] > 80 && nilaiUjian[i] <= 100) {
            indeks[i] = 'A';
        } else if (nilaiUjian[i] > 70) {
            indeks[i] = 'B';
        } else if (nilaiUjian[i] > 65) {
            indeks[i] = 'C';
        } else if (nilaiUjian[i] > 50) {
            indeks[i] = 'D';
        } else {
            indeks[i] = 'E';
        }
    }
}


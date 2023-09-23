/*
Nama Program : Konversi format 12 menjadi 24 jam
Nama         : Andreas Teguh Santoso Kosasih
NPM          : 140810230047
Tanggal Buat : Minggu, 18 September 2023
Deskripsi    : Mengkonversi format 12 jam menjadi 24 jam 
*/

#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main () {
    typedef struct {int jj; 
                    int mm;
                    int dd;
                    string ap;
                    char titikDua; 
    } Jam; 

    Jam j; 
    
    cout << "Masukkan Waktu Sistem 12 Jam" << endl;
    cout << "Masukkan jam:menit:detik AM/PM: "; cin >> j.jj; cin >> j.titikDua; cin >> j.mm; cin >> j.titikDua; cin >> j.dd; cin >> j.ap; 

    cout << "Jam dalam format 12 Jam adalah: " << setw(2) << setfill('0') << j.jj << ":" 
                                               << setw(2) << setfill('0') << j.mm << ":" 
                                               << setw(2) << setfill('0') << j.dd << " " 
                                               << j.ap << endl;
    if (j.jj != 12 && j.ap == "PM") {
        j.jj += 12;
    } else if (j.jj == 12 && j.ap == "AM") {
        j.jj = 0;
    }

    cout << "Jam dalam format 24 Jam adalah = " << setw(2) << setfill('0') << j.jj << ":" 
                                                << setw(2) << setfill('0') << j.mm << ":"
                                                << setw(2) << setfill('0') << j.dd << endl;
    return 0;
}

// input : 07:05:45 PM
// output : 19:05:45 

/*
Mengubah format 12 jam menjadi 24 jam 
1. Gunakan 00.00 untuk menandakan tengah malam dalam format 24 jam! (untuk AM)
2. Hapus AM untuk jam antara 01.00 dan 11.59 (untuk AM)
3. Biarkan jam di siang hari tetap sedemikian adanya, hapus saja PM. 12.00 - 12.59 (untuk PM)
4. Tambahkan 12 untuk jam antara 01.00 PM dan 11.59 PM dan hapus PM. Maka menjadi 13.00- 23.59! (untuk PM)
*/






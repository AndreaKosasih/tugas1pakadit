/*
Dalam C++, Anda dapat menggunakan dua pendekatan berbeda untuk mendefinisikan tipe data bentukan (struct). Ini termasuk pendekatan standar dengan menggunakan kata kunci struct dan pendekatan dengan menggunakan typedef struct. Kedua pendekatan tersebut dapat digunakan untuk mencapai hasil yang sama, tetapi ada beberapa perbedaan antara keduanya.
*/

// Pendekatan Standar dengan struct:

// cpp standar
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};

// cpp typedef
typedef struct {
    string nama;
    int umur;
    string jurusan;
} Mahasiswa;

// Perbedaan utama antara keduanya adalah sebagai berikut:

/*
Nama Tipe Data: Dalam pendekatan standar dengan struct, Anda harus menyertakan kata kunci struct ketika mendefinisikan variabel dari tipe data tersebut. Dalam pendekatan dengan typedef struct, Anda bisa langsung menggunakan nama tipe data tanpa struct.
*/

// Contoh dengan pendekatan standar:
// cpp standar
struct Mahasiswa mahasiswa1;

//Contoh dengan pendekatan typedef:
// cpp typedef
Mahasiswa mahasiswa1;
/* Kemudahan Penggunaan: Penggunaan typedef dapat membuat kode lebih mudah dibaca dan lebih singkat karena Anda dapat menggunakan nama tipe data bentukan tanpa perlu menambahkan struct setiap kali Anda mendeklarasikan variabel dari tipe data tersebut. */

/*
Kedua pendekatan tersebut sah, dan Anda dapat memilih yang lebih sesuai dengan preferensi Anda. Pendekatan dengan typedef sering digunakan untuk meningkatkan kejelasan dan keterbacaan kode.
*/

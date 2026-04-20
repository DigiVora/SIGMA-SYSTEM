#include <iostream>
#include <string>

using namespace std;

int main() {
    // Created by DigiVora Studio
    // Developer Achmad Khusnul Yakin, S.Kom.
    
    cout << "=========================================================" << endl;
	cout << "                PROJECT: SIGMA SYSTEM                " << endl;
	cout << "          Developed by DigiVora Studio (2026)            " << endl;
    
    // Disini saya menambahkan sebuah garis hiasan
    cout << "=========================================================" << endl;
    
    // Baris Kode di Bawah Untuk Menampilkan identitas Berupa (Nama Lengkap)
    string nama;
    cout << "Nama Lengkap\t\t\t\t: ";
    nama = "Achmad Khusnul Yakin"; 
    cout << nama << endl;
    
    // Baris Kode di Bawah Untuk Menampilkan (Nama Kampus/Instansi)
    string kampus;
    cout << "Kampus\t\t\t\t\t: ";
    kampus = "Insitut Teknologi Mojosari"; 
    cout << kampus << endl;
    
    // Baris Kode di Bawah Untuk Menampilkan (Program Pendidikan)
    string prodi;
    cout << "Prodi\t\t\t\t\t: ";
    prodi = "Sistem Informasi"; 
    cout << prodi << endl;
    
    // Baris Kode di Bawah Untuk Menampilkan (Detail NIM)
    string nim; 
    cout << "NIM\t\t\t\t\t: ";
    nim = "202557201001"; 
    cout << nim << endl;
    cout << "=========================================================" << endl << endl;

    // Disini Dibagian Input Nilai Saya Juga Menambahkan Garis Hiasan
    cout << "---------------- INPUT NILAI MATA KULIAH ----------------" << endl;
    int bd, al, pai, sd, pl;
    cout << "Masukkan Nilai Basis Data\t\t: ";
    cin >> bd;
    cout << "Masukkan Nilai Aljabar Linear\t\t: ";
    cin >> al;
    cout << "Masukkan Nilai Agama Islam\t\t: ";
    cin >> pai;
    cout << "Masukkan Nilai Struktur Data\t\t: ";
    cin >> sd;
    cout << "Masukkan Nilai Pemrograman Lanjut\t: ";
    cin >> pl;
    cout << "---------------------------------------------------------" << endl;

    // Menghitung Nilai Rata-rata
    int hasil = (bd + al + pai + sd + pl) / 5;

    // Output Nilai Rata-rata Saya Buat Diapit Hiasan Berupa Garis
    cout << "\n=========================================================" << endl;
    cout << "Nilai Rata-Rata \t\t\t: " << hasil << endl;

    // Kategori nilai
    if (hasil >= 86) {
        cout << "Kategori\t\t\t        : A (Sangat Memuaskan)" << endl;
    } else if (hasil >= 80) {
        cout << "Kategori\t\t\t        : B (Memuaskan)" << endl;
    } else if (hasil >= 70) {
        cout << "Kategori\t\t\t        : C (Cukup)" << endl;
    } else if (hasil >= 60) {
        cout << "Kategori\t\t\t        : D (Kurang)" << endl;
    } else {
        cout << "Kategori\t\t\t        : E (Gagal)" << endl;
    }
    cout << "=========================================================" << endl;

    return 0;
}

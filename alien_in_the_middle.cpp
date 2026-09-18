#include <iostream>
using namespace std;

// Fungsi untuk menghitung panjang pesan
int hitungPanjang(char pesan[]) {
    int panjang = 0;
    while (pesan[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

// Fungsi untuk menyandikan pesan sesuai sistem sandi alien
void sandikanPesan(char pesan[], char hasil[]) {
    int panjang = hitungPanjang(pesan);
    int nilaiSebelumnyaAsli = 0; // nilai huruf ASLI sebelumnya (huruf pertama tidak punya)

    for (int i = 0; i < panjang; i++) {
        int nilaiAsli = pesan[i] - 'A' + 1; // A=1, B=2, ..., Z=26

        int nilaiBaru = (nilaiAsli + nilaiSebelumnyaAsli - 1) % 26 + 1;
        hasil[i] = 'A' + (nilaiBaru - 1);

        nilaiSebelumnyaAsli = nilaiAsli; // simpan nilai huruf ASLI, bukan hasil sandi
    }
    hasil[panjang] = '\0';
}

int main() {
    char pesan[100];
    char hasil[100];

    cout << "Masukkan pesan (huruf kapital, tanpa spasi): ";
    cin >> pesan;

    sandikanPesan(pesan, hasil);

    cout << "Pesan asli   : " << pesan << endl;
    cout << "Pesan tersandi: " << hasil << endl;

    return 0;
}

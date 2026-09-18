#include <iostream>
using namespace std;

// Fungsi untuk mencetak urutan eliminasi dan astronot terakhir yang bertahan
void selesaikanMisi(int N, int K) {
    // next[i] = astronot yang berada tepat setelah astronot i dalam lingkaran
    int next[1005];
    for (int i = 1; i < N; i++) {
        next[i] = i + 1;
    }
    next[N] = 1; // astronot terakhir menyambung ke astronot 1 (lingkaran)

    int start = 1;      // astronot tempat perhitungan dimulai (dihitung sebagai "1")
    int prevStart = N;  // astronot sebelum 'start'
    int remaining = N;

    cout << "Urutan astronot yang dieliminasi: ";

    while (remaining > 1) {
        int predTarget = prevStart;
        int target = start;

        // Jalan K-1 langkah (karena 'start' sendiri sudah hitungan ke-1)
        for (int langkah = 1; langkah < K; langkah++) {
            predTarget = target;
            target = next[target];
        }

        // Eliminasi 'target'
        cout << target;
        if (remaining > 2) cout << ", ";

        next[predTarget] = next[target]; // lompati node yang dieliminasi
        int newStart = next[target];
        prevStart = predTarget;
        start = newStart;
        remaining--;

        // Update nilai K sesuai aturan
        if (target % 2 == 0) {
            K = K + 2;
        } else {
            K = K - 1;
        }
        if (K < 2) {
            K = 2;
        }
    }

    cout << endl;
    cout << "Astronot terakhir yang bertahan: " << start << endl;
}

int main() {
    int N, K;
    cout << "Masukkan jumlah astronot (N): ";
    cin >> N;
    cout << "Masukkan nilai awal K: ";
    cin >> K;

    selesaikanMisi(N, K);

    return 0;
}

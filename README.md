# Pemrograman_RakhaDanishPanular_Ruby_TLS26

**Nama Lengkap:** Rakha Danish Panular
**Kelompok:** Ruby
**Tugas:** Luminous Quest - Pemrograman Dasar (TLS 2026)

## Isi Repository

| File | Deskripsi |
|---|---|
| `Fase1_RakhaDanishPanular_Ruby_TLS26.pdf` | Dokumen Fase 1 berisi pseudocode, flowchart, dan penjelasan logika untuk Problem 1 (The Last Astronaut) dan Problem 2 (Alien-in-the-Middle). |
| `last_astronaut.cpp` | Source code C++ Fase 2 - implementasi solusi Problem 1 (The Last Astronaut). |
| `alien_in_the_middle.cpp` | Source code C++ Fase 2 - implementasi solusi Problem 2 (Alien-in-the-Middle). |

## Ringkasan Solusi

### Problem 1: The Last Astronaut
Simulasi eliminasi astronot dalam lingkaran (varian Josephus Problem) menggunakan
circular linked list berbasis array (`next[]`), dengan nilai K yang berubah secara
dinamis setelah setiap eliminasi (K += 2 jika nomor genap, K -= 1 jika ganjil,
minimum K = 2). Program mencetak seluruh urutan eliminasi dan astronot terakhir
yang bertahan.

### Problem 2: Alien-in-the-Middle
Implementasi sistem sandi berantai, di mana setiap huruf digeser berdasarkan nilai
posisi alfabet dari huruf **asli** sebelumnya (bukan huruf hasil sandi), dengan
operasi wrap-around (modulo 26) apabila pergeseran melewati huruf Z.

## Ketentuan Program
- Hanya menggunakan library `iostream`.
- Seluruh fungsi yang diperlukan dibuat secara manual (user-defined function),
  tanpa menggunakan function bawaan library lain.

## Cara Menjalankan
```bash
g++ last_astronaut.cpp -o last_astronaut
./last_astronaut

g++ alien_in_the_middle.cpp -o alien_in_the_middle
./alien_in_the_middle
```

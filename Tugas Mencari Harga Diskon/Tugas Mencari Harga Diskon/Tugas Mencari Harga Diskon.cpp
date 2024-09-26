// Tugas Mencari Harga Diskon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main() {
    float harga_asli = 150000; // Harga kaos oblong
    float diskon_persen = 12.5; // Persentase diskon
    float diskon, harga_bersih;

    // Menghitung diskon
    diskon = harga_asli * (diskon_persen / 100);

    // Menghitung harga bersih
    harga_bersih = harga_asli - diskon;

    // Menampilkan hasil
    printf("harga_asli: Rp %.2f\n" , harga_asli);
    printf("diskon_persen : Rp %.2f\n", diskon_persen);
    printf("Besarnya diskon: Rp %.2f\n", diskon);
    printf("Harga bersih yang harus dibayar: Rp %.2f\n", harga_bersih);

    return 0;
}



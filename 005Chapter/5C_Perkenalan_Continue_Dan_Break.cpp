#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        // Jika luas ini bukan bilangan genap, iterasi ini bisa dihentikan
        if (luas % 2 != 0) {
            continue; // Lanjutkan ke iterasi berikutnya
        }

        // Sekarang, kita akan cek apakah luas ini merupakan bilangan kuadrat sempurna.
        bool kuadrat_sempurna = false;

        for (int k = 1; k * k <= luas; k++) { // Lebih efisien dengan k * k <= luas
            if (k * k == luas) {
                kuadrat_sempurna = true;
                break; // Keluar dari loop dalam jika sudah ketemu
            }
        }

        if (kuadrat_sempurna) {
            // Kita telah menemukan luas terkecil yang memenuhi seluruh syarat.

            // Cetak luas ini.
            cout << luas << endl;

            // Kita tidak perlu lagi melanjutkan perulangan.
            break;
        }
    }
}
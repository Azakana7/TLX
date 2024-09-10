#include <iostream>
using namespace std;

int main() {
    bool ada_yang_dijual = false;

    for (int sisi = 121; sisi <= 125; sisi++) {
        bool kelipatan_2 = sisi % 2 == 0;
        bool kelipatan_3 = sisi % 3 == 0;

        // Syarat kandang yang dijual: kelipatan 2 dan BUKAN kelipatan 3
        if (kelipatan_2 && !kelipatan_3) {
            ada_yang_dijual = true;
            break; // Kita bisa berhenti mencari setelah menemukan satu kandang yang memenuhi syarat
        }
    }

    if (ada_yang_dijual) {
        cout << "ada" << endl;
    } else {
        cout << "tidak ada" << endl;
    }

    return 0;
}
int main (int CPrKvbLhlGu, char *P0Sfva []) {
    int k9Wmrsw = (903 - 903), zzyK0eBxCTNA = (101 - 101), T3SFCeJuB0 = (653 - 653);
    int HOvsJN, l3VHcT8aJi;
    int OL17uPER [(717 - 711)] [6] = {(11 - 11)};
    int fH2T8NGcyI5, Bm7L5jD, nzkl1L;
    for (fH2T8NGcyI5 = (705 - 704); (150 - 145) >= fH2T8NGcyI5; fH2T8NGcyI5 = fH2T8NGcyI5 + (978 - 977)) {
        for (Bm7L5jD = (430 - 429); (547 - 542) >= Bm7L5jD; Bm7L5jD = Bm7L5jD +(844 - 843)) {
            scanf ("%d", &OL17uPER[fH2T8NGcyI5][Bm7L5jD]);
        }
    }
    for (fH2T8NGcyI5 = (221 - 220); (251 - 246) >= fH2T8NGcyI5; fH2T8NGcyI5++, k9Wmrsw = (301 - 301)) {
        for (Bm7L5jD = 1; Bm7L5jD <= (225 - 220); Bm7L5jD = Bm7L5jD +1) {
            if (OL17uPER[fH2T8NGcyI5][Bm7L5jD] > k9Wmrsw) {
                k9Wmrsw = OL17uPER[fH2T8NGcyI5][Bm7L5jD];
                HOvsJN = fH2T8NGcyI5;
                l3VHcT8aJi = Bm7L5jD;
            }
        }
        for (nzkl1L = 1; nzkl1L <= 5; nzkl1L = nzkl1L + 1) {
            if (OL17uPER[nzkl1L][l3VHcT8aJi] < k9Wmrsw) {
                zzyK0eBxCTNA = 1;
                break;
            }
        }
        if (zzyK0eBxCTNA == (121 - 121)) {
            printf ("%d %d %d\n", HOvsJN, l3VHcT8aJi, k9Wmrsw);
            T3SFCeJuB0 = T3SFCeJuB0 +1;
        }
        else {
            zzyK0eBxCTNA = 0;
        }
    }
    if (T3SFCeJuB0 == 0) {
    }
    return 0;
}


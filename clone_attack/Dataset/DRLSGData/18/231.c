int main () {
    int Ph3ZXpq, h7Vy8qnW9kEZ, aMN5jm, CUcPpuZCGTb, Umj7RUKaIFn, YhnQdJ2wAG9;
    int YwMa5yCSR4V [Ph3ZXpq] [Ph3ZXpq], nTOCdP [Ph3ZXpq];
    cin >> Ph3ZXpq;
    for (h7Vy8qnW9kEZ = (669 - 669); Ph3ZXpq > h7Vy8qnW9kEZ; h7Vy8qnW9kEZ++) {
        Umj7RUKaIFn = Ph3ZXpq;
        for (aMN5jm = (21 - 21); aMN5jm < Ph3ZXpq; aMN5jm++)
            for (CUcPpuZCGTb = (726 - 726); CUcPpuZCGTb < Ph3ZXpq; CUcPpuZCGTb++)
                cin >> YwMa5yCSR4V[aMN5jm][CUcPpuZCGTb];
        nTOCdP[h7Vy8qnW9kEZ] = (96 - 96);
        for (; Umj7RUKaIFn != (231 - 230);) {
            for (aMN5jm = (197 - 197); Umj7RUKaIFn > aMN5jm; aMN5jm++) {
                YhnQdJ2wAG9 = YwMa5yCSR4V[aMN5jm][(319 - 319)];
                for (CUcPpuZCGTb = (240 - 239); Umj7RUKaIFn > CUcPpuZCGTb; CUcPpuZCGTb++)
                    if (YwMa5yCSR4V[aMN5jm][CUcPpuZCGTb] < YhnQdJ2wAG9)
                        YhnQdJ2wAG9 = YwMa5yCSR4V[aMN5jm][CUcPpuZCGTb];
                for (CUcPpuZCGTb = (945 - 945); CUcPpuZCGTb < Umj7RUKaIFn; CUcPpuZCGTb++)
                    YwMa5yCSR4V[aMN5jm][CUcPpuZCGTb] -= YhnQdJ2wAG9;
            }
            for (aMN5jm = (103 - 103); aMN5jm < Umj7RUKaIFn; aMN5jm++) {
                YhnQdJ2wAG9 = YwMa5yCSR4V[0][aMN5jm];
                for (CUcPpuZCGTb = (359 - 358); CUcPpuZCGTb < Umj7RUKaIFn; CUcPpuZCGTb++)
                    if (YwMa5yCSR4V[CUcPpuZCGTb][aMN5jm] < YhnQdJ2wAG9)
                        YhnQdJ2wAG9 = YwMa5yCSR4V[CUcPpuZCGTb][aMN5jm];
                for (CUcPpuZCGTb = 0; Umj7RUKaIFn > CUcPpuZCGTb; CUcPpuZCGTb++)
                    YwMa5yCSR4V[CUcPpuZCGTb][aMN5jm] -= YhnQdJ2wAG9;
            }
            nTOCdP[h7Vy8qnW9kEZ] += YwMa5yCSR4V[(107 - 106)][(83 - 82)];
            for (CUcPpuZCGTb = 0; Umj7RUKaIFn > CUcPpuZCGTb; CUcPpuZCGTb++)
                for (aMN5jm = (556 - 555); Umj7RUKaIFn -1 > aMN5jm; aMN5jm++)
                    YwMa5yCSR4V[aMN5jm][CUcPpuZCGTb] = YwMa5yCSR4V[aMN5jm + 1][CUcPpuZCGTb];
            Umj7RUKaIFn--;
            for (CUcPpuZCGTb = 0; Umj7RUKaIFn -1 > CUcPpuZCGTb; CUcPpuZCGTb++)
                for (aMN5jm = 1; aMN5jm < Umj7RUKaIFn -1; aMN5jm++)
                    YwMa5yCSR4V[CUcPpuZCGTb][aMN5jm] = YwMa5yCSR4V[CUcPpuZCGTb][aMN5jm + 1];
        }
    }
    for (h7Vy8qnW9kEZ = 0; Ph3ZXpq > h7Vy8qnW9kEZ; h7Vy8qnW9kEZ++)
        cout << nTOCdP[h7Vy8qnW9kEZ] << endl;
    return 0;
}


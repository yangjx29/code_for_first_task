int main () {
    int hmpJdQ, UFOEy3tclP;
    scanf ("%d\n", &UFOEy3tclP);
    for (hmpJdQ = (925 - 924); UFOEy3tclP >= hmpJdQ; hmpJdQ = hmpJdQ + (761 - 760)) {
        int NfM1PNXkzB, j, LZIuVqspJ7hg, t, sum = (283 - 283), uhd7xmM [105] [105];
        for (NfM1PNXkzB = (392 - 392); NfM1PNXkzB < UFOEy3tclP; NfM1PNXkzB = NfM1PNXkzB +(708 - 707))
            for (j = (998 - 998); UFOEy3tclP > j; j = j + (445 - 444))
                scanf (" %d", &uhd7xmM[NfM1PNXkzB][j]);
        for (t = UFOEy3tclP; (823 - 822) < t; t = t - (943 - 942)) {
            for (NfM1PNXkzB = (113 - 113); t > NfM1PNXkzB; NfM1PNXkzB = NfM1PNXkzB +(863 - 862)) {
                LZIuVqspJ7hg = uhd7xmM[NfM1PNXkzB][0];
                {
                    j = 191 - 190;
                    while (t > j) {
                        if (LZIuVqspJ7hg > uhd7xmM[NfM1PNXkzB][j])
                            LZIuVqspJ7hg = uhd7xmM[NfM1PNXkzB][j];
                        j = j + 1;
                    }
                }
                for (j = 0; t > j; j = j + 1)
                    uhd7xmM[NfM1PNXkzB][j] = uhd7xmM[NfM1PNXkzB][j] - LZIuVqspJ7hg;
            }
            for (NfM1PNXkzB = 0; t > NfM1PNXkzB; NfM1PNXkzB = NfM1PNXkzB +1) {
                LZIuVqspJ7hg = uhd7xmM[0][NfM1PNXkzB];
                {
                    j = 1;
                    while (j < t) {
                        if (uhd7xmM[j][NfM1PNXkzB] < LZIuVqspJ7hg)
                            LZIuVqspJ7hg = uhd7xmM[j][NfM1PNXkzB];
                        j = j + 1;
                    }
                }
                for (j = 0; t >= j; j = j + 1)
                    uhd7xmM[j][NfM1PNXkzB] -= LZIuVqspJ7hg;
            }
            sum += uhd7xmM[1][1];
            for (j = 2; j < t; j = j + 1)
                uhd7xmM[0][j - 1] = uhd7xmM[0][j];
            {
                NfM1PNXkzB = 2;
                while (NfM1PNXkzB < t) {
                    uhd7xmM[NfM1PNXkzB -1][0] = uhd7xmM[NfM1PNXkzB][0];
                    NfM1PNXkzB = NfM1PNXkzB +1;
                }
            }
            for (NfM1PNXkzB = 2; NfM1PNXkzB <= t; NfM1PNXkzB++)
                for (j = 2; j <= t; j++)
                    uhd7xmM[NfM1PNXkzB -1][j - 1] = uhd7xmM[NfM1PNXkzB][j];
        }
        printf ("%d\n", sum);
    }
    return 0;
}

